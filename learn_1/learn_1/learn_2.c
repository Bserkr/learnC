#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//
//           ��쳲�������
//   ��FORѭ����
//int main() {
//	int a1 = 1;
//	int a2 = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	printf("����������쳲������ĸ�����");
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

//  ���õݹ���쳲�����
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
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	fib = funtion(n);
//	printf("%d", fib);
//	system("pause");
//	return 0;
//}
//
//    �ݹ���׳�
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
//	printf("ǿ����׳�����");
//	scanf("%d", &n);
//	ret = Mul(n);
//	printf("%d�Ľ׳��ǣ�", ret);
//
//
//	system("pause");
//	return 0;
//}
//
//
//             �ݹ������λ��֮��
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
//// ������
//int main() {
//	int num = 0;
//	int ret = 0;
//	printf("������һ����ֵ��");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d", ret);
//
//	system("pause");
//	return 0;
//}
//
//			n��k�η�
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
//	printf("������a,k��ֵ:\n");
//	scanf("%d%d\n", &a, &k);
//	int t = Digui(a, k);
//	printf("%d\n", t);
//	return 0;
//}
//
//
//  									���������ÿһλ
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
//                               ���ַ�������
//// ���ַ�������
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
//  �ݹ���
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
//   �ַ�����ת
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
//  �������ַ�����
//int myStrlen(char *str) {
//	int i = 0;
//	for (i = 0; *str != '\0'; i++) {
//		str++;
//	}
//	return i;
//}
//
// �ݹ����ַ�����
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
