#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[1000]; //数组a的类型为字符型，而该类型是有范围的，所以放不了1000个数字，而是会把超过char类型的数字转变成该类型范围内的数字。
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;    //-1  -2 ... -128 ->172->126...3->2->1->0
	}
	printf("%d", strlen(a));// 而strlen函数是计算到出现0为止（不包括0）
	return 0;
}

//int main()  //  由于i是一个无符号整型，所以i不可能为负数，所以会陷入死循环
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i++)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n",a); // %u 打印的是十进制的无符号数字
//	return 0;
//}

//int main()   //补码存储 + 有符号、无符号数 + 整型提升
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0x44332211;
//	int* p = &a;  //这里将a的地址（44332211）放在整型指针当中。
//	*p = 0;     //当*p=0时，由于是整型指针类型，所以访问4个字节，a的地址变为（00000000）
//
//
//	char* p = &a; //这里将a的地址（44332211）放在char型指针当中。
//	*p = 0;      //当*p=0时，由于是char指针类型，所以访问1个字节，a的地址变为（00332211）
//	
//	            //这个例子再一次说明指针类型是有意义的，它的类型决定了指针解引用的时候可以访问几个字节
//	return 0;
//}

//————————————————————————————————————————————————————————————————-

//int main() //写一段代码告诉我当前机器的字节序是什么
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("当前机器的字节序是小端\n");
//	}
//	else
//	{
//		printf("当前机器的字节序是大端\n");
//	}
//	return 0;
//}

//————————————————————————————————————————————————————————————————

// 描述一个学生- 一些数据
// 名字、年龄、电话、性别


// struct 结构体关键字；   Stu - 结构体标签；  struct Stu - 结构体类型
//struct Stu     
//{
//	//成员变量 
//	char name[20];
//	short age;
//	char number[12];
//	char sex[5];
//}s1, s2, s3;  //s1,s2,s3 是三个全局的结构体变量


//typedef struct Stu     //区分开来这两种写法。这种事新定义这个结构体类型名为 Stu 
//{
//	//成员变量 
//	char name[20];
//	short age;
//	char number[12];
//	char sex[5];
//}Stu;                
//  
//void Print(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->number);
//	printf("sex: %s\n", ps->sex);
//}
//
//int  main()    //结构体
//{
//
//	//struct Stu s;  //局部变量 
//	Stu s2 = { "向彭", 22 ,"10086", "男" };    //结构体初始化
//	printf("%s\n", s2.name);                 // 打印结构体
//	printf("%d\n", s2.age);
//	printf("%s\n", s2.number);
//	printf("%s\n", s2.sex);
//
//	Print(&s2);  //调用结构体传址要比直接传结构体要更好，因为不会开辟新的空间
//	//system("pause");
//	return 0;
//}
