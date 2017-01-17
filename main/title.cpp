#include <DxLib.h>
#include "nerve.h"
#include "title.h"

void title_Update(){
	if (CheckKeyInput(KEY_INPUT_1) != 0){
		nerve_ChangeScene(m_Body);
	}
}

void title_Draw(){
	DrawString(0, 0, "TITLE", GetColor(255, 255, 255));
}