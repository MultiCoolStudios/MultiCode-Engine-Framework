#include "mce_core.h"
#include "raylib.h"
void OnUpdate(void) {

}
void OnDraw(void) {
    DrawText("Message sent by MCE_F (MultiCode Engine Framework) - Test Message for app builders.");
}
int main(void) {
    MCE_Config config = {
        .windowWidth = 800,
        .windowHeight = 450,
        .windowTitle = "MCE Version 1 RT Framework Demo Application",
        .targetFPS = 60
    };
    MCE_Init(config);
    MCE_Run(OnUpdate, OnDraw);
    MCE_Shutdown();
    return 0;
}