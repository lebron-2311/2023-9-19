#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
int main()
{
	char arr[] = "abcdef";                       //6个元素
	printf("%d\n", strlen(arr));                 //6
	printf("%d\n", strlen(arr + 0));//1---不是1从第一个元素往后数多长6
	printf("%d\n", strlen(arr + 1));//5
	///*printf("%d\n", strlen(*arr));*///error
	//printf("%d\n", strlen(arr[1]));//1
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//随机值

	//a b c d e f \0
	//printf("%d\n", sizeof(arr));             //6
	//printf("%d\n", sizeof(arr + 0));          //4/8
	//printf("%d\n", sizeof(*arr));            //1
	//printf("%d\n", sizeof(arr[1]));         //1
	//printf("%d\n", sizeof(&arr));              //4/8
	//printf("%d\n", sizeof(&arr + 1));          //4/8
	//printf("%d\n", sizeof(&arr[0] + 1));       //4/8

	//return 0;
}