/*
	PageFile 磁盘上用于存储内存上交换下来的数据的文件。
	WorkingSetSize  进程里不可被交换出来的内存大小
*/

#include <Windows.h>
#include<tchar.h>
int test2() {
	/*
	* 检查CPU核数
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