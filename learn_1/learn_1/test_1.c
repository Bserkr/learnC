
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int Binarysearch(int arr[], int size, int tofind) {
//	int left = 0;
//	int right = size - 1;
//	int count = 0;
//	while (left <= right) {
//		count++;
//		int mid = (left + right) / 2;
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
//	
//	printf("没有找到\n");
//}
//
//int main() {
//	int arr[ ] = { 0,2,3,4,5,6,8,10,15,58,78};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binarysearch(arr, size, 2);  // 找其他元素正常， 找 0 出现异常， 没有输出。 
//
//	system("pause");
//	return 0;
//}


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

// 三角星星输出
//int main() {
//	int i, j, n;
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

int main() {
	int a, n, i;
	int sum = 0;
	int tmp = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++) {
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n ", sum);
	
	

	system("pause");
	return 0;

}



