
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//
////int Binarysearch(int arr[], int size, int tofind) {  //自定义函数
////	int left = 0;
//	int right = size - 1;  
//	int count = 0;
//	while (left <= right) {   
//		count++;  //记录查找次数
//		int mid = (left + right) / 2;  // 中间元素
//		if (arr[mid] > tofind) 
//			right = mid - 1;
//		else if (arr[mid] < tofind)
//			left = mid + 1;
//		else if (arr[mid] == tofind){
//		
//			printf("找到了arr[%d] = %d\n", mid,tofind);
//			printf("%d次查找\n", count);
//			return 1;
//		}
//		
//	}
//	printf("没有找到\n");  // 循环结束后未找到，则输出未找到
//	return 0;
//}
//
//
//int main() {
//	
//	int arr[] = { 0,2,5,7,9,10,11,15 };
//	
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binarysearch(arr, size, 1);  
//
//	system("pause");
//	
//}
//
//
//int Max(int x, int y) {
//	if (x > y) {
//		return (x);
//	}
//	else
//	{
//		return (y);
//	}
//
//}
//
//int main (){
//	int a = 10;
//	int b = 20;
//	int ret = Max(a, b);
//	printf("%d", ret);
//
//	system("pause");
//	return 0;
//}
//
//
//int binary_search(int arr[], int size, int tofind) //自定义函数binary_search()
//{
//	int left, right, mid, count = 0, count1 = 0;
//	left = 0;
//	right = size - 1;
//	while (left <= right)    //査找范围不为0时执行循环体语句
//	{
//		count++;    //count记录査找次数
//		mid = (left + right) / 2;    //求中间位置
//		if (arr[mid] > tofind)   
//			right = mid - 1;   
//		else if (arr[mid] < tofind)    //key 大于中间值时
//			left = mid + 1;    //确定右子表范围
//		else if (arr[mid] = tofind)    //当key等于中间值时，证明查找成功
//		{
//			printf("查找成功!\n 查找 %d 次!a[%d]=%d", count, mid, tofind);    //输出査找次数及所査找元素在数组中的位置
//			count1++;    //count1记录查找成功次数
//			break;
//		}
//	}
//	if (count1 == 0)    //判断是否查找失敗
//		printf("查找失敗!");    //査找失敗输出no found
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 0,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//
//	int ret = binary_search(arr, size, 0);    //调用自定义函数
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
// 三角星星输出
//int main() {
//	int i, j, n;  // n为要输出的行数值得一半
//	scanf("%d", &n);
//	for (i = 1; i < 2 * n - 1; i = i + 2) {
//		for (j = 2*n; j > 2 * n - i; j--) {
//			printf("*");
//		}
//		printf("\n");  // 打印上半部分
//	}
//
//	for (i = 0; i < 2*n; i = i+2) {
//		for (j = 1; j < 2*n-i; j++) {
//			printf("*");  
//		}
//		printf("\n");  //打印下半部分
//	
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//
//#include <math.h>
//
//int main() {
//	int i = 0;
//
//	for (i = 0; i <= 999; i++) {
//		int count = 1;
//		int num = i;
//		int sum = 0;
//			while (num / 10) {
//				count++;
//				num = num / 10;
//			}
//
//			num = i;
//			while (num) {
//				
//				sum += pow(num % 10, count);
//				num = num / 10;
//
//			}
//			if (sum == i) {
//				printf("%d ", sum);
//			}
//
//
//	}
//	system("pause");
//	return 0;
//
//}
////
////int main() {
//	int a, n, i;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++) {
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n ", sum);
//	
//	
//
//	system("pause");
//	return 0;
//
//}
//
//
//
//int main() {
//	int a, n, i;
//	int num = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++) {
//		num = num * 10 + a;  
//		sum += num;
//	}
//	printf("sum = %d", sum);
//	system("pause");
//	return 0;
//}
//
// 猜字谜游戏
//
//void menu() {
//
//	printf("***************************\n");
//	printf("******1 开始游戏***********\n");
//	printf("******0 退出游戏***********\n");
//	printf("***************************\n");
//}
//
//
//void game() {
//	int A;
//	int  target = rand() % 100 + 1;
//	while (1) {
//		printf("请输入一个数：");
//		scanf("%d", &A);
//		if (target > A) {
//			printf("低了\n");
//
//		}
//		else if (target < A) {
//			printf("高了\n");
//
//		}
//		else if (target == A) {
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main() {
//	int input = 1;
//	srand((unsigned)time(NULL));
//	
//	while (input) {
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("您的输入有误");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main() {
//	char password[] = { "woshizhu" };
//	char input[] = { 0 };
//	int count = 0;
//	int k = 3;
//	while (1){
//		printf("请输入密码：");
//		scanf("%s", input);
//		if (0 == (char)strcmp(input, "woshizhu")) {
//			printf("密码通过\n");
//			break;
//		}
//		else
//		{
//			k--;
//			printf("密码有误，请再次输入，您还有%d机会\n", k);
//			count++;
//		} 
//		if (count == 2) {
//			break;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	char temp;
//	scanf("%c", &temp);
//
//	if (temp >= 97 && temp <= 122)
//		 输入小写，输出对应大写字母
//		printf("%c\n", temp - 32);
//	else if (temp >= 65 && temp <= 90) {
//		printf("%c\n", temp + 32);   // 输入大写字母，输出对应小写字母
//	}
//	else {
//		printf("你的输入有误");
//	}
//	system("pause");
//	return 0;
//}


//
//
//int print(int n) {              //1234
//
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//	return 0;
//}
//
//int main() {
//	int num = 1234;
//	print(num);
//
//	system("pause");
//	return 0;
//}

//
//                               //           输出随意大小的乘法口诀表
//int mult(int n) {
//	int i = 0;
//	int j = 0;
//	int mult = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {      // 注意条件
//			printf("%d*%d=%2d ", j, i, i*j);
//			if (j == i)
//				printf("\n");
//		}
//
//	}
//	return 0;
//}
//
//int main() {
//	int n = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	mult(n);
//	system("pause");
//	return 0;
//}
//
//
//				//					用函数进行数字交换
//int temp(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	return 0;
//}
//
//// 主函数
//int main() {
//	int a = 5;
//	int b = 8;
//	printf("a = %d, b = %d\n", a, b);
//	int* p1;
//	int* p2;
//	p1 = &a;
//	p2 = &b;
//	temp(p1, p2);
//	printf("a = %d, b = %d\n", a, b);
//
//
//	system("pause");
//	return 0;
//}
//
//										用函数判断闰年
//
//int leapyear(int x) {
//	if (x % 400 == 0) {
//		printf("%d是闰年\n",x);
//	
//	}
//	else if (x % 100 != 0 && x % 4 == 0) {
//		printf("%d是闰年\n", x);
//		
//	}
//	else {
//		printf("%d不是润年\n", x);
//	}
//	return 0;
//}
//
//int main() {
//	int year = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &year);
//	leapyear(year);
//	system("pause");
//	return 0;
//}
//
// 初始化函数
//int init(int arr[], int size) {
//	int i = 0;
//	
//	for (i = 0; i <= size - 1; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i <= size - 1; i++) {
//
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
//// 清空数字函数
//int empty(int arr[], int size) {
//	int i = 0;
//	for (i = 0; i <= size - 1; i++) {
//		arr[i] = '\0';
//	}
//	return 0;
//}
//
//// 转置数组
//
//int reverse(int arr[], int size) {
//	int i = 0;
//	for (i = 0; i <= size - 1; i++) {
//		arr[i] = arr[size - 1 - i];
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//
//
//int main () {
//	// 输入数组
//	int a = 0;
//	int arr[] = { 0 };
//	printf("请输入数组长度：");
//	scanf("%d", &a);
//	printf("请输入长度为%d的数字元素:", a);
//	int size = a;
//	init( arr,a);
//	// 清空数组 或 转置数组
//	int b = 0;
//	printf("0 代表清空数字，1代表逆置数字");
//	scanf("%d", &b);
//	switch (b) {
//	case 0:
//		empty(arr, a);
//		break;
//	case 1:
//		reverse(arr, a);
//		break;
//	}
//	system("pause");
//	return 0;
//} 
//
//
//
//
// 判断素数的函数
//int prime_num(int x) {
//	int i = 0;
//	int a = 0;
//	for (i = 2; i < x; i++) {
//		if (x % i == 0) {
//			a++;
//		}
//	}
//	if (a == 0) {
//		printf("%d是素数\n", x);
//	}
//	else{
//		printf("%d不是素数\n", x);
//	}
//	
//	return 0;
//}
//int main() {
//	int num;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	prime_num(num);
//
//	system("pause");
//	return 0;
//}
//
//
