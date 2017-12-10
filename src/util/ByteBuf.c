#include "ByteBuf.h"

ByteBuf* ByteBuf_new(size_t cap)
{
        ByteBuf* buf = malloc(sizeof(ByteBuf));
        buf->begin = malloc(sizeof(unsigned char) * cap);
        buf->mark = buf->begin;
        buf->end = buf->begin + cap;
        return buf;
}


void ByteBuf_del(ByteBuf* buf)
{
        free(buf->begin);
        free(buf);
}

void ByteBuf_expand(ByteBuf* buf, int factor)
{

}
