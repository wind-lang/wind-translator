#include <stdio.h>
#include "Translate.h"
#include "Debug.h"


int main(int argc, char const *argv[]) {
        if(argc == 3)
        {
                FILE* readPtr;
                size_t fileSize;
                ByteBuf* insBuf;

                if((readPtr = fopen(argv[1], "r")) == NULL)
                {
                        fprintf(stderr, "IO Error: Cannot open file: '%s'\n", argv[1]);
                        exit(1);
                }
                fseek(readPtr, 0, SEEK_END);
                fileSize = ftell(readPtr);
                fseek(readPtr, 0, SEEK_SET);

                char* codeBuf = malloc((sizeof(char) * fileSize) + 1);
                fgets(codeBuf, fileSize, readPtr);
                fclose(readPtr);

                insBuf = Translate_code(codeBuf);
                // prints debug for records
                Debug_print(insBuf->begin, insBuf->mark);
                ByteBuf_to_file(insBuf, argv[2]);

                free(codeBuf);
        }
        else
        {
                fprintf(stderr, "Invalid number of arguments, expected 2 got: %d\n", argc-1);
                exit(1);
        }
        return 0;
}
