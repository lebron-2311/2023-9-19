#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
int main()
{
	char arr[] = "abcdef";                       //6��Ԫ��
	printf("%d\n", strlen(arr));                 //6
	printf("%d\n", strlen(arr + 0));//1---����1�ӵ�һ��Ԫ���������೤6
	printf("%d\n", strlen(arr + 1));//5
	///*printf("%d\n", strlen(*arr));*///error
	//printf("%d\n", strlen(arr[1]));//1
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ

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