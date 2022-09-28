#include "raylib.h"

/*
Videos: 
  Channel: Yearning
  Series (first link): https://youtu.be/zUuPTzcL0js

Equation to rotate the i value inside the matrix (each step involves a rotation of 90 degrees, starting from 0)
  i = y * N + X
  i = N * (N - 1) - XN + y
  i = (N^2 - 1) - Ny - x
  i = (N - 1) + Nx -y
*/

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

void foo() {
  int val = 10;
}
int main(void)
{
  // Initialization
  //--------------------------------------------------------------------------------------
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
  SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
  //--------------------------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose())    // Detect window close button or ESC key
  {
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------
  CloseWindow();        // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}