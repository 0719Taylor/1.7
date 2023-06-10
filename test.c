#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////函数递归
//int main()
//{
//	printf("hehe\n");
//	main();           //error -- stack overflow 栈溢出
//	return 0;
//}





////练习1：接受一个整型值（无符号）,按照顺序打印它的每一位. 例如：输入1234,输出1 2 3 4.
//void print(int n)
//{
//	if (n > 9)//说明n至少是两位数
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num); //1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}







//编写函数不允许创建临时变量,求字符串的长度

//int my_strlen(char* str)
//{
//	int count = 0;  //临时变量
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////递归   
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("")
////1+1+1+0 -- 3	
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr); //arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//	printf("len=%d\n",len);
//	return 0;
//}






////求n的阶乘
//int Facl(int n)   //循环的方式
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)   //递归的方式
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac2(n); //循环的方式
//	printf("%d\n",ret);
//	return 0;
//}







//求第n个斐波那契数（不考虑溢出）
//斐波那契数列  
//1 1 2 3 5 8 13 21 34  55 ....
//描述第n个斐波那契数的公式        当n<=2时,Fib(n)=1;当n>2时,Fib(n)=Fib(n-1)+Fib(n-2).	 

//int Fib(int n)    //计算速度慢
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)   //循环的方式,从前往后算
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}





////满足递归的两个必要条件时,仍然可能发生栈溢出
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}









//函数递归的经典题目   1.汉诺塔问题       2.青蛙跳台阶问题	