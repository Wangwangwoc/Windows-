/*
	PageFile ���������ڴ洢�ڴ��Ͻ������������ݵ��ļ���
	WorkingSetSize  �����ﲻ�ɱ������������ڴ��С
*/

#include <Windows.h>
#include<tchar.h>
int test2() {
	/*
	* ���CPU����
		BOOL GetProcessAffinityMask(
	  HANDLE     hProcess,
	  PDWORD_PTR lpProcessAffinityMask,
	  PDWORD_PTR lpSystemAffinityMask
	);
	*/
	/*
	DWORD_PTR s_affinity, p_affinity;
	GetProcessAffinityMask(GetCurrentProcess(), &p_affinity, &s_affinity);
	_tprintf(L"%d %d", s_affinity, p_affinity);
	*/
	
	return 0;
	
}