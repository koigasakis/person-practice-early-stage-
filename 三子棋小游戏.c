#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void computer(char arr[4][3])
{
	int ret = 0;
	int x = 0;
	int	y = 0;
	do{
		    ret = rand() % 3;
			y = ret;
			ret = rand() % 3;
			x = ret;
		
			if (arr[x][y] == ' ')
			{
				arr[x][y] = '#';
				break;
			}
			
			
	} while (1);

}
void play(char arr[4][3])
{
	int x = 0;
	int	y = 0;
	do{
		printf("������*���꣺");
		scanf("%d %d", &x, &y);
		if (x > 0, x<4 && y>0, y < 4)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ��\n");
		}
		else
			printf("����Ƿ�\n");
	} while (1);

	
}
int iswin(char arr[4][3])
{
	int i = 0;
	int m = 0;
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][2] == arr[i][1] && arr[i][1] == '*')
			return 1;
		else if (arr[i][0] == arr[i][1] && arr[i][2] == arr[i][1] && arr[i][1] == '#')
			return 0;
		else if (arr[0][i] == arr[1][i] && arr[2][i] == arr[1][i] && arr[1][i] == '#')
			return 0;
		else if (arr[0][i] == arr[1][i] && arr[2][i] == arr[1][i] && arr[1][i] == '*')
			return 1;

		else if (arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1] && arr[1][1] == '*')
			return 1;
		else if (arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1] && arr[1][1] == '*')
			return 1;
		else if (arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1] && arr[1][1] == '#')
			return 0;
		else if (arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1] && arr[1][1] == '#')
			return 0;

	}
	for (m = 0; m < 3; m++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			if (arr[m][j] != ' ')
				return 2;
			
		}

	}
	return 3;
}

void game()
{
	int z = 1;
	char arr[4][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0};
	do
	{
		int ret = 0;
		if (z == 1)
		{
			print(arr);	//��ӡ����
		}
		play(arr);//�������	
		system("cls");
		print(arr);	//��ӡ����
		ret = iswin(arr);	//ȷ����Ӯ
		if (ret == 1)
		{
			printf("���Ӯ\n");
			Sleep(1500);
			break;
		}
		else if (ret == 0)
		{
			printf("����Ӯ\n");
			Sleep(1500);
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			Sleep(1500);
			break;
		}

		computer(arr);//��������
		system("cls");
		print(arr);	//��ӡ����
		ret = iswin(arr);	//4.ȷ����Ӯ
		if (ret == 1)
		{
			printf("���Ӯ\n");
			Sleep(1500);
			break;
		}
		else if (ret == 0)
		{
			printf("����Ӯ\n");
			Sleep(1500);
			break;
		}
		else if (ret == 3)
		{
			printf("ƽ��\n");
			Sleep(1500);
			break;
		}

		z++;
		
	} while (1);
}

int print(char arr[4][3])
{   
	int m = 0;
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (i == 1 || i == 4 || i == 7)
			printf("     |     |     \n");
		else if (i == 2)
			printf("  %c  |  %c  |  %c  \n", arr[0][0], arr[0][1], arr[0][2]);
		else if (i == 5)
			printf("  %c  |  %c  |  %c  \n", arr[1][0], arr[1][1], arr[1][2]);
		else if (i == 8)
			printf("  %c  |  %c  |  %c  \n", arr[2][0], arr[2][1], arr[2][2]);
		else
			printf("_____|_____|_____\n");

	}
}

int meun()
{
	system("cls");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("################                  ################\n");
	printf("################   ��ʼ��Ϸ��1    ################\n");
	printf("################                  ################\n");
	printf("################                  ################\n");
	printf("################   �˳���Ϸ��0    ################\n");
	printf("################                  ################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	printf("##################################################\n");
	return 0;
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{ 
		

		meun();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			Sleep(1000);
			break;
		default:
		  
			printf("�Ƿ����룬����������\n");
	        Sleep(1000);
			break;
		}

	} while (input);
		return 0;
}