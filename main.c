#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*char arr1[] = "hello world";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);
//	printf("arr1 = %s\n", arr1);
//	printf("arr2 = %s\n", arr2);*/
//	char arr3[] = "hello world";
//	memset(arr3, '#', 5);
//	printf("arr3 = %s\n", arr3);
//	return 0;
//}

//void swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void swap2(int* px, int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//swap1(num1, num2);
//	swap2(&num1, &num2);
//	//printf("swap1: n1=%d,n2=%d\n", num1,num2);
//	printf("swap2: n1=%d,n2=%d\n", num1,num2);
//	return 0;
//}

//判断一个数是否为素数
//int sushu(int n)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("please input a num:");
//	scanf("%d", &num);
//	if (sushu(num) == 1)
//	{
//		printf("%d is a sushu\n", num);
//	}
//	else
//	{
//		printf("%d is not a sushu\n", num);
//	}
//	return 0;
//}

//判断闰年
//int runnian(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0)|| y % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	printf("please input a year:");
//	scanf("%d", &y);
//	if (runnian(y) == 1)
//	{
//		printf("%d is a runnian\n",y);
//	}
//	else
//	{
//		printf("%d is not a runnian\n",y);
//	}
//	return 0;
//}

//整型数组二分查找
//void search(int *arr, int n, int length)
//{
//	int mid = 0;
//	int left = 0;
//	int right = length - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("arr[%d]", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("error\n");
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,14,15,19,22,24,25,26,27 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	printf("please input a num:");
//	scanf("%d", &num);
//	search(arr, num, length);
//	return 0;
//}

//写一个函数，每调用一次num+1
//void add(int *pn)
//{
//	(*pn)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	add(&num);
//	add(&num);
//	add(&num);
//	add(&num);
//	printf("count=%d", num);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//求字符串长度（可创建临时变量）
//char length(char* arr)//指针变量
//{
//	int count = 0;//指针记录的个数
//	while (*arr != '\0')//arr地址所对应的值
//	{
//		count++;
//		arr++;//不用*arr原因：指针所指向的位置发生改变，而不是指针所指向的地址改变
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = length(arr);//arr是数组，数组传参传进去的是第1个元素的地址，而不是整个数组
//	printf("%d\n", len);
//	return 0;
//}

//求字符串长度（不可创建临时变量）
//int Strlen(const char* arr)
//{
//	if (*arr == '\0')//限制条件
//	{
//		return 0;
//	}
//	else
//	{
//		return(1 + Strlen(arr + 1));//第一个1为首地址
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

