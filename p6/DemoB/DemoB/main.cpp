#include <Windows.h>

LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//���崰����
	WNDCLASSEX wcx;

	wcx.lpszClassName = "MainWClass";

	//��������
	CreateWindow("MainWClass",)
}


//���ڹ��̺�����������Ϣ
LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return 0;
}