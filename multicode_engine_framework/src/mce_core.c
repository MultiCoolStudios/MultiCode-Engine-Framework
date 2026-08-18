#include "mce_core.h"
#include "mce_banner.h"
#include "raylib.h"
static bool mce_initialized = false;
bool MCE_Init(MCE_Config config) {
    MCE_PrintBanner();
    InitWindow(config.windowWidth, config.windowHeight, config.windowTitle);
    SetTargetFPS(config.targetFPS);
    mce_initialized = true;
    return true;
}
void MCE_Run(MCE_Callback onUpdate, MCE_Callback onDraw) {
    if (!mce_initialized) {
        return;
    }
    while (!WindowShouldClose()) {
        if (onUpdate != NULL) {
            onUpdate();
        }
        BeginDrawing();
            ClearBackground(RAYWHITE);
            if (onDraw != NULL) {
                onDraw();
            }
        EndDrawing();
    }
}
void MCE_Shutdown(void) {
    CloseWindow();
    mce_initialized = false;
}