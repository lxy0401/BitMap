#pragma once
#include <stdint.h>
typedef uint64_t BitmapType;

typedef struct Bitmap
{
    BitmapType* data;//64位无符号整形占8个字节
    uint64_t capacity;//位图最多能容纳多少位
}Bitmap;
