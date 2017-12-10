#ifndef BYTEBUF_H
#define BYTEBUF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ByteBuf_SPACE(buf) (buf->end - buf->mark)

#define ByteBuf_CAP(buf) (buf->end - buf->begin)

#define ByteBuf_LEN(buf) (buf->mark - buf->begin)

typedef struct
{
        unsigned char* begin;
        unsigned char* mark;
        unsigned char* end;
} ByteBuf;

ByteBuf* ByteBuf_new(size_t cap);

void ByteBuf_del(ByteBuf* buf);




#endif
