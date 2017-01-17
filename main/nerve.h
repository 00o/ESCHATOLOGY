#pragma once
#if !defined(NERVE)
#define NERVE

typedef enum {
	m_Body,
	m_Title,
	m_Menu,
} m ;

void nerve_Update();
void nerve_Draw();

void nerve_ChangeScene(m nextScene);

#endif