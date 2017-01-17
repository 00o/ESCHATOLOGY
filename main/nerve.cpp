#include <DxLib.h>
#include "nerve.h"
#include "title.h"
#include "menu.h"
#include "body.h"

static m Scene = m_Title;

void nerve_Update(){
	switch (Scene){
	case m_Title:
		title_Update();
		break;
	case m_Body:
		body_Update();
		break;
	case m_Menu:
		menu_Update();
		break;
	}
}

void nerve_Draw(){
	switch (Scene){
	case m_Title:
		title_Draw();
		break;
	case m_Body:
		body_Draw();
		break;
	case m_Menu:
		menu_Draw();
		break;
	}
}

void nerve_ChangeScene(m NextSence){
	Scene = NextSence;
}