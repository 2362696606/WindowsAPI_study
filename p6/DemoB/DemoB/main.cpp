#include <Windows.h>

LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//定义窗口类
	WNDCLASSEX wcx;

	wcx.lpszClassName = "MainWClass";

	//创建窗口
	CreateWindow("MainWClass",)
}


//窗口过程函数，处理消息
LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return 0;
}