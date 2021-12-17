
//in src/raylib
#include "raylib.h"

int main(void){

    constexpr int screenW = 800;
    constexpr int screenH = 800;

    InitWindow(screenW, screenH, "Raylib basic example");

    SetTargetFPS(120);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("ayoooo", 20, 20, 20, DARKGRAY);

        DrawCircle(screenW/5, 120, 35, DARKBLUE);

        DrawCircleGradient(screenW/5, 220, 60, GREEN, SKYBLUE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}