#ifndef UTILS_H
#define UTILS_H
#include <stdint.h>


typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;

typedef float f4;
typedef double f8;
typedef long double f10;


typedef u8 COLOR[3];

extern const COLOR BLACK;
extern const COLOR WHITE;
extern const COLOR RED;
extern const COLOR GREEN;
extern const COLOR BLUE;


extern const u8 DEFAULT_WINDOW_W;
extern const u8 DEFAULT_WINDOW_H;
extern const u8 DEFAULT_WINDOW_OPACITY;

extern const f4 TARGET_FPS;
extern const f4 TARGET_RENDERTIME_MS;

#endif
