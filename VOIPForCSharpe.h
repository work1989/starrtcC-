#pragma once
#pragma once
#include<string>
using namespace std;
extern "C" {
	//��¼
	__declspec(dllexport) BOOL YPLogin(char* localuserid);
	//����
	__declspec(dllexport) int VoipCallPerson(char* targetId, char* str);
	//�ͷ�
	__declspec(dllexport) int DeleteVoip();
}
