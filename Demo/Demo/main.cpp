#include <stdio.h>
#include <Windows.h>

int main()
{
	int a = 12;
	float b = 3.14159;

	LPCSTR szString = "Windows data type,string.";
	CHAR lpString[120];
	DWORD dwMax = 0xFFFFFFFF;
	DWORD dwOne = 0x1;
	INT iMax = 0xFFFFFFFF;
	INT iOne = 0x1;
	HANDLE h;
	HICON hicon;
	HINSTANCE hinstance;
	HKEY hkey;
	HMODULE hmodule;
	HWND hwnd;

	MessageBoxA(NULL, szString, "LPSTR", MB_OK);

	CopyMemory(lpString, szString, strlen(szString) + 1);
	MessageBoxA(NULL, lpString, "CHAR[]", MB_OK);

	TCHAR dw_str[20];

	if (dwMax > dwOne)
	{
		wsprintf(dw_str, L"%X", dwMax);
		MessageBoxW(NULL, dw_str, TEXT("MAX"), MB_OK);
	}
	else
	{
		wsprintf(dw_str, L"%X", dwOne);
		MessageBoxW(NULL, dw_str, TEXT("MAX"), MB_OK);
	}

	if (iMax > iOne)
	{
		wsprintf(dw_str, L"%X", iMax);
		MessageBoxW(NULL, dw_str, TEXT("MAX"), MB_OK);
	}
	else
	{
		wsprintf(dw_str, L"%X", iOne);
		MessageBoxW(NULL, dw_str, TEXT("MAX"), MB_OK);
	}

	printf("hello %d %f", a, b);

	system("pause");
	return 0;
}