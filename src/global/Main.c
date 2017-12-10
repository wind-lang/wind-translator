#include <stdio.h>
#include "ByteBuf.h"

int main(int argc, char const *argv[]) {
        ByteBuf* buf = ByteBuf_new(60);
        ByteBuf_write_long(buf, 50);
        ByteBuf_to_file(buf, "foo.windc");
        ByteBuf_del(buf);
        return 0;
}
