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



////�����ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();           //error -- stack overflow ջ���
//	return 0;
//}





////��ϰ1������һ������ֵ���޷��ţ�,����˳���ӡ����ÿһλ. ���磺����1234,���1 2 3 4.
//void print(int n)
//{
//	if (n > 9)//˵��n��������λ��
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num); //1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}







//��д��������������ʱ����,���ַ����ĳ���

//int my_strlen(char* str)
//{
//	int count = 0;  //��ʱ����
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////�ݹ�   
////�Ѵ��»�С
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
//	int len = my_strlen(arr); //arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n",len);
//	return 0;
//}






////��n�Ľ׳�
//int Facl(int n)   //ѭ���ķ�ʽ
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)   //�ݹ�ķ�ʽ
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
//	ret = Fac2(n); //ѭ���ķ�ʽ
//	printf("%d\n",ret);
//	return 0;
//}







//���n��쳲��������������������
//쳲���������  
//1 1 2 3 5 8 13 21 34  55 ....
//������n��쳲��������Ĺ�ʽ        ��n<=2ʱ,Fib(n)=1;��n>2ʱ,Fib(n)=Fib(n-1)+Fib(n-2).	 

//int Fib(int n)    //�����ٶ���
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)   //ѭ���ķ�ʽ,��ǰ������
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





////����ݹ��������Ҫ����ʱ,��Ȼ���ܷ���ջ���
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









//�����ݹ�ľ�����Ŀ   1.��ŵ������       2.������̨������	