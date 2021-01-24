#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()

{
	
	int i = 0;
	int l = 0;
	char m[] = {0};
	char zm = "lk8787923";
	for (i = 1; i < 4; i++)
	{
		printf("请输入密码：");
		scanf_s("%s", m);
		if (strcmp(m,"lk8787923")==1)
			break;
		else
		{
			printf("密码错误\n");
		
		}

	}
	if (i == 4)
		printf("已经达到最大输入次数，登录失败\n");
	else
	    printf("登陆成功\n");
	return 0;

}

