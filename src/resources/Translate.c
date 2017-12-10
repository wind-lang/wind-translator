#include "Translate.h"

ByteBuf* Translate_code(char* srcCode)
{
        ByteBuf* insBuf = ByteBuf_new(TRANS_BUF_SIZE);
        char* reader = srcCode;
        while (*reader)
        {
                switch(*reader)
                {
                // white space
                case ' ':
                case '\n':
                case '\t':
                case '\v':
                        reader++;
                        break;
                default:
                        fprintf(stderr, "Syntax Error: Unexpected token: '%c'\n", *reader);
                        exit(1);
                        return NULL
                }
        }
        ByteBuf_write_byte(insBuf, WindInstruc_Stop);
        return insBuf;
}
