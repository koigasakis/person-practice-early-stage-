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
		printf("���������룺");
		scanf_s("%s", m);
		if (strcmp(m,"lk8787923")==1)
			break;
		else
		{
			printf("�������\n");
		
		}

	}
	if (i == 4)
		printf("�Ѿ��ﵽ��������������¼ʧ��\n");
	else
	    printf("��½�ɹ�\n");
	return 0;

}

