#include<Windows.h>
#include <msi.h>
#include <msiquery.h>
#pragma comment(lib, "msi.lib") 

/*
1. 一个线程退出，那么线程创建的所有窗口就被自动销毁了
2. GetMessage函数，从哪里获得窗口消息？
	从GetMessage函数所在线程的消息队列中获取消息。也就是说由窗口的线程都有一个消息队列。
3. 消息队列和窗口如何关联？ 哪个线程创建窗口，那么这个窗口接收到的消息就进入到这个线程的消息队列中。
4.CreateThread函数创建一个内核对象。
	HANDLE CreateThread(
  LPSECURITY_ATTRIBUTES   lpThreadAttributes,
  SIZE_T                  dwStackSize,
  LPTHREAD_START_ROUTINE  lpStartAddress,
  __drv_aliasesMem LPVOID lpParameter,
  DWORD                   dwCreationFlags,
  LPDWORD                 lpThreadId
);

	lpThreadAttributes 指向一个线程安全描述符，其中包含一个线程句柄是否可被子进程的标识。
		ACL : 访问控制列表， ACCESS CONTROL LIST,其中包含SID与对应的权限
	dwStackSize 线程栈的大小
*/


int main() {
	MSIDBOPEN_CREATE
	/*
Copy
HRESULT MsiGetFileSignatureInformationA(
  LPCSTR         szSignedObjectPath,
  DWORD          dwFlags,
  PCCERT_CONTEXT *ppcCertContext,
  LPBYTE         pbHashData,
  LPDWORD        pcbHashData
);*/
	PCCERT_CONTEXT ppcCertContext=NULL;
	LPCSTR file_path = "D:\\python\\ICONExtrator\\python-2.7.18.msi";
	HRESULT res = MsiGetFileSignatureInformationA(file_path, 1, &ppcCertContext, NULL, NULL);
	HRESULT res2 = MsiGetFileSignatureInformationA(file_path, 1, &ppcCertContext, NULL, NULL);
	

	
	/*
		线程何时退出？
		1. 线程中主函数中执行到return 。
		2. 线程执行 ExitThread。
		3. 其他线程调用了TerminateThread()。
		4. 线程所在的进程退出了。
	*/
	return 0;
}