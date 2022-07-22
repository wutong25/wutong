#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int count = 0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 10 == 9)  
		{
			count++;
			printf("%d ", n);
		}
		if(n / 10 == 9)
		{
		count++;
		printf("%d ", n);
		}
	}
		printf("count=%d", count);

	return 0;
}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	
//	for (n = 101; n <= 200; n+=2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(n); j++)
//		{
//			if (n % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(n))
//		{
//			count++;
//			printf("%d ", n);
//			
//		}
//		
//	
//	}
//	printf(" count=% d", count);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//			printf("%d ", n);
//	}
//	return 0;
//}
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{ }
//	else 
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a > c)
//	{ }
//	else
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if(b>c)
//	{ }
//	else
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
////#include<stdio.h>
////#include<windows.h>
////#include<stdlib.h>
////int main()
////{
////	char arrl1[] = "wang  qi   zui  hao  kan ???????????????";
////	char arrl2[] = "zhang deng chao jing de hen*************";
////	int left = 0;
////	int sz = sizeof(arrl1) / sizeof arrl1[0]-2;
////	int right = sz;
////	while (left <= right)
////	{
////		arrl2[left] = arrl1[left];
////		arrl2[right] = arrl1[right];
////		left++;
////		right--;
////		Sleep(1000); 
////		system("cls");
////		printf("%s\n", arrl2);
////		
////	}
////	
////
////
////	return 0;
////}
//
//
//
//
//
//
////int main()
////{
////	int n = 0;
////	int m = 1;
////	int a = 0;
////	printf("ÇëÊäÈën\n");
////	scanf("%d", &n);
////	for(a=1;a<=n;a++)
////	{
////		m = m * a;
////		
////	}
////	printf("%d", m);
////	
////	return 0;
////}