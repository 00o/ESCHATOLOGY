#include <DxLib.h>
#include "nerve.h"
#include "Key.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);
	SetMainWindowText("ESCHATOLOGY");

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0){
		Key_Update();

		nerve_Update();
		nerve_Draw();
	}

	WaitKey();
	DxLib_End();
	return 0;
}