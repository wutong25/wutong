#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meau()
{
	printf("*************************************\n");
	printf("*****1--������Ϸ****0--�˳���Ϸ******\n");
	printf("*************************************\n");

}
void game()
{
	int n = 0;
	int ret=rand()%100+1;
	//printf("%d\n",ret);//����һ�������
	printf("������֣�\n");
	while (1)
	{
		scanf("%d", &n);
		if (n < ret)
		{
			printf("��С��\n");
		}
		else if(n>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
	
}
int main()
{
	int i = 0;
	int ret = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("����������\n");
		scanf("%d", &i);
		switch(i)
		{
			
		case 1:
				game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (i);
	return 0;
}




//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (m = 1; m <= i; m++)
//		{
//			printf("%d*%d=%-2d  ", i, m, i * m);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int m = 24;
//	int n = 18;
//	while (m % n)
//	{
//		int a = m % n;
//		m = n;
//		n = a;
//	}
//	printf("%d", n);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	char arr[20] = { 0 };
//	printf("����������\n");
//	for (n = 1; n <= 3; n++)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (n == 4)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}






//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int left = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof arr[0];
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			printf("�ҵ����±�Ϊ%d ", mid);
//			break;
//		}
//	}
//
//	if(left>right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}



//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 0)
//		{
//			printf("%d ",year);
//		}
//
//	}
//	
//	return 0;
//}







//#include<math.h>
//int is_prime(int x)
//{
//	int n = 0;
//	for (n = 2; n <=sqrt(x); n++)
//	{
//		if (x % n == 0)
//		{
//			return 0;
//			
//		}
//	}
//	if (n > sqrt(x))
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}