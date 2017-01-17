#include <DxLib.h>
#include "nerve.h"
#include "body.h"

void body_Update(){
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0){
		nerve_ChangeScene(m_Title);
	}
}

void body_Draw(){
	DrawString(0, 0, "Game Screen! Hello, World!!", GetColor(255, 255, 255));
	DrawString(0, 20, "ESCキーでタイトルに戻る", GetColor(255, 255, 255));
}