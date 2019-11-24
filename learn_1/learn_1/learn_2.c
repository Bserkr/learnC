#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//           求斐波那契数
//   适用FOR循环求
//int main() {
//	int a1 = 1;
//	int a2 = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	printf("请输入所求斐波那契的个数：");
//	scanf("%d", &n);
//	if (n < 2) {
//		sum = 1;
//	}
//	for (i = 3; i <= n; i++) {
//		sum = a1 + a2;
//		a2 = a1;
//		a1 = sum;
//	}
//	printf("sum = %d ", sum);
//	system("pause");
//	return 0;
//}

//  运用递归求斐波那契

//int funtion(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return funtion(n - 1) + funtion(n - 2);
//	}
//}
//
//int main() {
//	int n = 0;
//	int fib = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	fib = funtion(n);
//	printf("%d", fib);
//	system("pause");
//	return 0;
//}

  //  递归求阶乘
//int Mul(int n) {
//
//	if (n == 1) {
//		return 1;
//	}
//	else
//	{
//		return n * Mul(n - 1);
//	}
//
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	printf("强输入阶乘数：");
//	scanf("%d", &n);
//	ret = Mul(n);
//	printf("%d的阶乘是：", ret);
//
//
//	system("pause");
//	return 0;
//}



int DigitSum(int n) {
	int a = 0;

	if (n > 9) {
		DigitSum(n / 10);
	}
	
	printf("%d ", n % 10);
}

// 主函数
int main() {
	int num = 0;
	int ret = 0;
	printf("请输入一个数值：");
	scanf("%d", &num);
	ret = DigitSum(num);
	

	system("pause");
	return 0;
}
