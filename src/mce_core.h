#ifndef MCE_CORE_H
#define MCE_CORE_H
#include <stdbool.h>
typedef struct {
    int windowWidth;
    int windowHeight;
    const char *windowTitle;
    int targetFPS;
} MCE_Config;
typedef void (*MCE_Callback)(void);
bool MCE_Init(MCE_Config config);
void MCE_Run(MCE_Callback onUpdate, MCE_Callback onDraw)
void MCE_Shutdown(void);
#endif