#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//enum day
//{
//	//枚举的所有取值
//	Mon,//0    
//	Tues,//1    
//	Wed//2
//};//注意有分号
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
//	//向内存申请10个整型的空间
//	int *p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
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
//		//正常使用
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

//realloc注意
//1.p后面有足够空间能追加则直接追加
//2.若不够则开辟一个新的空间并把原来的数据拷贝过来再释放旧的空间
//3.用新的变量来接受返回值
//int main()
//{
//	int *p=(int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
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


