#include <Windows.h>
#include <stdio.h>
#define BUF_SIZE 256
int main()
{

	HANDLE hFileRead;
	DWORD nIn;
	CHAR buffer[BUF_SIZE];

	hFileRead = CreateFileA("book_1.txt",
		GENERIC_READ,
		FILE_SHARE_READ,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	if (hFileRead == INVALID_HANDLE_VALUE)
	{
		printf("Cannot open file,Error:%x\n", GetLastError());
		system("pause");
		return -1;
	}

	while (ReadFile(hFileRead, buffer, BUF_SIZE, &nIn, NULL) && nIn > 0)
	{
		printf("%s\n", buffer);
	}

	CloseHandle(hFileRead);
	system("pause");
	return 0;
}