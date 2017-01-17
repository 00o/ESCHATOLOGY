#include <DxLib.h>
#include "nerve.h"
#include "menu.h"
#include "Key.h"

const static int BODY_Y = 200;

typedef enum{
	e_Body,

	e_Num,
} e ;

static int NowSelect = e_Body;

void menu_Update(){
	if (Key_Get(KEY_INPUT_DOWN) == 1){
		NowSelect = (NowSelect + 1) % e_Num;
	}
	if (Key_Get(KEY_INPUT_UP) == 1){
		NowSelect = (NowSelect + (e_Num - 1)) % e_Num;
	}
	if (Key_Get(KEY_INPUT_RETURN) == 1){
		switch (NowSelect){
		case e_Body:
			nerve_ChangeScene(m_Body);
			break;
		}
	}
}

void menu_Draw(){
	DrawString(100, 100, "Menu Screen! Hello, World!!", GetColor(255, 255, 255));
	DrawString(120, BODY_Y, "GAME", GetColor(255, 255, 255));

	int y = 0;
	switch (NowSelect){
	case m_Body:
		y = BODY_Y;
		break;
	}
	DrawString(110, y, "Å°", GetColor(255, 255, 255));
}