#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int meun()
{
	printf("##########################################\n");
	printf("##########   ����Ϸ����  1    ############\n");
	printf("##########                    ############\n");
	printf("##########   ������Ϸ����0    ############\n");
	printf("##########                    ############\n");
	printf("##########################################\n");
	return 0;
}

void game()
{
	system("cls");
	int z = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("�˻ز˵�������1000\n");
	printf("ϵͳ�Ѿ�����һ��1~100�����������²�����");
	
	for (;;)
	{
		scanf("%d", &z);
		if (z < ret&&z <= 100 && z >= 0)
			printf("�����һ���Ǵ���%d��\n���������룺", z);
		else if (z>ret&&z<=100&&z>=0)
			printf("�����һ����С��%d��\n���������룺", z);
		else if (z == ret)
		{
			printf("��ϲ�����������%d", z);
			Sleep(3000);
			break;
		}
		else if (z == 1000)
			break;
		else
			printf("��tmϹ���úô���\n������1~100�����֣�");
	}
			return 0;
}


int main()
{
	srand((unsigned int)time(NULL));
	int x = 0;
	do
	{
		system("cls");
		meun();
		printf("��ѡ��");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			Sleep(2000);
			break;
		default:
			printf("�������\n");
			Sleep(2000);
			break;
		}
	} while (x);
	return 0;
}