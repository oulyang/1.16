#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//enum day
//{
//	//ö�ٵ�����ȡֵ
//	Mon,//0    
//	Tues,//1    
//	Wed//2
//};//ע���зֺ�
//
//int main()
//{
//	enum day d = Mon;
//	d = Tues;
//	printf("%d\n", d);
//	return 0;
//}

//union U
//{
//	char ch;
//	int a;
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.ch));
//	printf("%p\n", &(u.a));
//	printf("%p\n", u);
//	return 0;
//}

//int chaeck1()
//{
//	union U 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int check()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//int a = 1;
//	//char* pa = (char*)&a;
//	//if (*pa == 1)
//	int ret = check();
//	if(ret==1)
//	{
//		printf("xiao");
//	}
//	else
//	{
//		printf("da");
//	}
//	return 0;
//}

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int *p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//reallocע��
//1.p�������㹻�ռ���׷����ֱ��׷��
//2.�������򿪱�һ���µĿռ䲢��ԭ�������ݿ����������ͷžɵĿռ�
//3.���µı��������ܷ���ֵ
//int main()
//{
//	int *p=(int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


