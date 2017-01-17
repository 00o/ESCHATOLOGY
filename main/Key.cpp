#include <DxLib.h>

static int saveKey[256];

void Key_Update(){
	char tmpKey[256];
	GetHitKeyStateAll(tmpKey);
	for (int i = 0; i < 256; i++){
		if (saveKey[i] != 0){
			saveKey[i]++;
		}
		else {
			saveKey[i] = 0;
		}
	}
}

int Key_Get(int KeyCode){
	return saveKey[KeyCode];
}