#include<Windows.h>
#include <msi.h>
#include <msiquery.h>
#pragma comment(lib, "msi.lib") 

/*
1. һ���߳��˳�����ô�̴߳��������д��ھͱ��Զ�������
2. GetMessage�������������ô�����Ϣ��
	��GetMessage���������̵߳���Ϣ�����л�ȡ��Ϣ��Ҳ����˵�ɴ��ڵ��̶߳���һ����Ϣ���С�
3. ��Ϣ���кʹ�����ι����� �ĸ��̴߳������ڣ���ô������ڽ��յ�����Ϣ�ͽ��뵽����̵߳���Ϣ�����С�
4.CreateThread��������һ���ں˶���
	HANDLE CreateThread(
  LPSECURITY_ATTRIBUTES   lpThreadAttributes,
  SIZE_T                  dwStackSize,
  LPTHREAD_START_ROUTINE  lpStartAddress,
  __drv_aliasesMem LPVOID lpParameter,
  DWORD                   dwCreationFlags,
  LPDWORD                 lpThreadId
);

	lpThreadAttributes ָ��һ���̰߳�ȫ�����������а���һ���߳̾���Ƿ�ɱ��ӽ��̵ı�ʶ��
		ACL : ���ʿ����б� ACCESS CONTROL LIST,���а���SID���Ӧ��Ȩ��
	dwStackSize �߳�ջ�Ĵ�С
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
		�̺߳�ʱ�˳���
		1. �߳�����������ִ�е�return ��
		2. �߳�ִ�� ExitThread��
		3. �����̵߳�����TerminateThread()��
		4. �߳����ڵĽ����˳��ˡ�
	*/
	return 0;
}