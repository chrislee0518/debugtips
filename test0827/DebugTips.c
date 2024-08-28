#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int add1(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int i = 0;
//	//for (i = 0; i < 100; i++)
//	//{
//	//	printf("%d ", i);
//	//}
//	int a = 1;
//	int b = 2;
//
//	int ret=add1(a, b);
//	//system("pause");
//	printf("%d", ret);
//
//	return 0;
//}
int main()//32Î»ËÀÑ­»· i=arr[12]
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}