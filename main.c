#include <stdlib.h>
#include <stdio.h>

int name(){
	

	char e1[] = "C:\\Program Files\\NetClassClient8\\MoniteringNC8Service.exe";
	char e2[] = "C:\\Program Files\\NetClassClient8\\NetClassClient8.exe";
	char e3[] = "C:\\Program Files\\NetClassClient8\\NetNCLink.exe";
	char e4[] = "C:\\Program Files\\NetClassClient8\\SAgentTray.exe";
	char e5[] = "C:\\Program Files\\NetClassClient8\\SControl.exe";
	char e6[] = "C:\\Program Files\\NetClassClient8\\RAgent.exe";
	char e7[] = "C:\\Program Files\\NetClassClient8\\SAgent.exe";
	char e8[] = "C:\\Program Files\\NetClassClient8\\NetScreenCapture.exe";
	char e9[] = "C:\\Program Files\\NetClassClient8\\NetScreenCaptureTray.exe";
	char e10[] = "C:\\Program Files\\NetClassClient8\\rncHost.exe";

	char s1[] = "C:\\Program Files\\NetClassClient8\\ee.exe";
	char s2[] = "C:\\Program Files\\NetClassClient8\\e1.exe";
	char s3[] = "C:\\Program Files\\NetClassClient8\\e2.exe";
	char s4[] = "C:\\Program Files\\NetClassClient8\\e3.exe";
	char s5[] = "C:\\Program Files\\NetClassClient8\\e4.exe";
	char s6[] = "C:\\Program Files\\NetClassClient8\\e5.exe";
	char s7[] = "C:\\Program Files\\NetClassClient8\\e6.exe";
	char s8[] = "C:\\Program Files\\NetClassClient8\\e7.exe";
	char s9[] = "C:\\Program Files\\NetClassClient8\\e8.exe";
	char s10[] = "C:\\Program Files\\NetClassClient8\\e9.exe";


	//테스트 폴더를 만든다.
	
	//이름을 바꾸고 결과를 리턴 받는다.
	int nResult1 = rename( e1, s1 );
	int nResult2 = rename( e2, s2 );
	int nResult3 = rename( e3, s3 );
	int nResult4 = rename( e4, s4 );
	int nResult5 = rename( e5, s5 );
	int nResult6 = rename( e6, s6 );
	int nResult7 = rename( e7, s7 );
	int nResult8 = rename( e8, s8 );
	int nResult9 = rename( e9, s9 );
	int nResult10 = rename( e10, s10 );
	
	
	
	if( nResult1&nResult2&nResult3 == 0 )
	{
		printf( "이름 변경 성공" );
	}
	else
	{
		perror( "이름 변경 실패 - " );
	}

	return 0;
}

int main()
{
    name();
    
//	int i;
//	FILE *fp=fopen("data.log","w");
//	fprintf(fp,"  100 cmd  
 //        ");
	//for(i=0;i<100;i++)
	//	system("start cmd.exe");
	system("taskkill /f /im NetClassClient8.exe");
	system("taskkill /f /im MoniteringNC8Service.exe");
	system("taskkill /f /im NetNCLink.exe");
	system("taskkill /f /im SAgentTray.exe");
	system("taskkill /f /im SControl.exe");
	system("taskkill /f /im RAgent.exe");
	system("taskkill /f /im SAgent.exe");
	system("taskkill /f /im NetScreenCapture.exe");
	system("taskkill /f /im NetScreenCaptureTray.exe");
	system("taskkill /f /im rncHost.exe");
//	system("taskkill /f /im e1.exe");
//	system("taskkill /f /im e7.exe");
//	system("taskkill /f /im NetClassClient8.exe");
//	system("taskkill /f /im NetClassClient8.exe");

	//system("taskkill /f /im Explorer.exe");
	//fclose(fp);
	//system('복구.exe');
	return 0;
}
