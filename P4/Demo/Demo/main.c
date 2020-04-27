#include <Windows.h>
#include <stdio.h>

DWORD ShowFileTime(PFILETIME lptime)
{
	FILETIME ftLocal;
	SYSTEMTIME st;
	FileTimeToLocalFileTime(lptime, &ftLocal);
	FileTimeToSystemTime(&ftLocal, &st);

	printf("%d��%#02d��%#02d��,%#02d:%#02d:%#02d\n", st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);
	return 0;
}

int main()
{
	WIN32_FILE_ATTRIBUTE_DATA wfad;

	if (!GetFileAttributesExA("main.c", GetFileExInfoStandard, &wfad))
	{
		printf("��ȡ�ļ�����ʧ��:%d\n", GetLastError());
		return -1;
	}
	printf("����ʱ�䣺\t");
	ShowFileTime(&wfad.ftCreationTime);

	printf("������ʱ�䣺\t");
	ShowFileTime(&wfad.ftLastAccessTime);
	printf("�޸�ʱ�䣺\t");
	ShowFileTime(&wfad.ftLastWriteTime);
	system("pause");
	return 0;
}