#include <Windows.h>
#include<tchar.h>

int test1() {
	/*
		����һ����ҵ,������ͬ����ҵ�����
	*/
	HANDLE job1 = CreateJobObject(NULL, L"job1");
	HANDLE job2 = CreateJobObject(NULL, L"job1");
	DWORD err = GetLastError();
	_tprintf(L"job1 %x, job2 %x,err %d\n", job1, job2,err);

	/*
		��鵱ǰ�����Ƿ�����ҵ��
	*/
	BOOL result,re;
	re = IsProcessInJob(GetCurrentProcess(), NULL, &result);
	_tprintf(L"result = %d,re = %d", result,re);
	return 1;
}