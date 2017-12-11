#include "Debug.h"

void Debug_print(unsigned char* start, unsigned char* end)
{
        Debug_HEADER;
        while(start != end)
        {
                switch(*start)
                {
                case WindInstruc_Stop:
                case WindInstruc_ExpStart:
                case WindInstruc_ExpEnd:
                case WindInstruc_Continue:
                case WindInstruc_Int:
                default:
                        printf("Unrecognized Instruction: %u\n;", *start++);
                }
        }
        Debug_FOOTER;
}
