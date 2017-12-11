#include <stdio.h>
#include "Translate.h"
#include "Debug.h"


int main(int argc, char const *argv[]) {
        ByteBuf* buf = Translate_code("123 -> \"123\"");
        Debug_print(buf->begin, buf->mark);
        ByteBuf_del(buf);
        return 0;
}
