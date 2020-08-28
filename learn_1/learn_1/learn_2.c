#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//
//           求斐波那契数
//   用FOR循环求
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
//
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
//
//    递归求阶乘
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
//
//
//             递归求各个位数之和
//int DigitSum(int n) {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	if (n < 9) {
//		return n;
//	}
//	else{
//		a = n % 10;
//		sum = sum + a;
//		return sum + DigitSum(n / 10);
//
//	}
//	
//}
//
//// 主函数
//int main() {
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个数值：");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d", ret);
//
//	system("pause");
//	return 0;
//}
//
//			n的k次方
//int Digui(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * Digui(n, k - 1);
//	}
//}
//int main()
//{
//	int a = 0, k = 0;
//	printf("请输入a,k的值:\n");
//	scanf("%d%d\n", &a, &k);
//	int t = Digui(a, k);
//	printf("%d\n", t);
//	return 0;
//}
//
//
//  									输出整数的每一位
//int DiGui(int n) {
//	if (n > 9) {
//		DiGui (n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main() {
//	int a = 12345;
//	DiGui(a);
//	system("pause");
//	return 0;
//}
//
//
//                               求字符串长度
//// 求字符串函数
//int strlen(char *str) {
//	int i = 0;
//	for (i = 0; *str != '\0'; i++) {
//		str++;
//	}
//	return i;
//}
//
//int main() {
//	int a;
//	char s[] = "cafh";
//	a = strlen(s);
//	printf("%d ",a);
//	system("pause");
//	return 0;
//}
//
//  递归求
//int strlen(const char *str) {
//	if (*str == '\0') {
//	return 0;
//	}
//	else return 1 + strlen(str+1);
//}
//
//int main() {
//	int a;
//	char s[] = "cafh";
//	a = strlen(s);
//	printf("%d ", a);
//	system("pause");
//	return 0;
//}
//
//
//   字符串反转
// 
//void reverse(char *str) {
//	char temp;
//	int i = strlen(str) - 1;
//	if (*str) {
//		temp = str[0];
//		str[0] = str[i];
//		str[i] = '\0';
//		reverse(str + 1);
//		str[i] = temp;
//	}
//	
//}
//
//int main() {
//	char s[] = "woshizhu";
//	reverse(s);
//
//	puts(s);
//	system("pause");
//	return 0;
//} 
//
//  函数求字符长度
//int myStrlen(char *str) {
//	int i = 0;
//	for (i = 0; *str != '\0'; i++) {
//		str++;
//	}
//	return i;
//}
//
// 递归求字符长度
//int myStrlen(char *str) {
//	
//	if (*str == '\0') {
//		return 0;
//	}
//	else return 1 + myStrlen(str + 1);
//	
//}
//
//int main() {
//	int a = 0;
//	char s[] = "asdfgfgh";
//	a = myStrlen(s);
//	printf("%d", a);
//	system("pause");
//	return 0;
//}
//
//
//void reverse(char *str) {
//	char temp;
//	int i = 0;
//	int j = myStrlen(str) - 1;
//	for (i = 0; i < j; i++, j--) {
//		temp = str[i];
//		str[i] = str[j];
//		str[j] = temp;
//
//	}
// }
//
//int main() {
//	char s[] = "aasdfghj";
//	reverse(s);
//	puts(s);
//
//	system("pause");
//	return 0;
//}
