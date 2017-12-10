#include <stdio.h>
#include "ByteBuf.h"
#include "Translate.h"

int main(int argc, char const *argv[]) {
        ByteBuf* buf = Translate_code("123 -> 123");
        ByteBuf_to_file(buf, "foo.windc");
        ByteBuf_del(buf);
        return 0;
}
