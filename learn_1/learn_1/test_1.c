
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
//			printf("�ҵ���arr[%d] = %d\n", mid,tofind);
//			printf("%d�β���\n", count);
//			return 1;
//		}
//		
//	}
//	
//	printf("û���ҵ�\n");
//}
//
//int main() {
//	int arr[ ] = { 0,2,3,4,5,6,8,10,15,58,78};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binarysearch(arr, size, 2);  // ������Ԫ�������� �� 0 �����쳣�� û������� 
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


//int binary_search(int arr[], int size, int tofind) //�Զ��庯��binary_search()
//{
//	int left, right, mid, count = 0, count1 = 0;
//	left = 0;
//	right = size - 1;
//	while (left <= right)    //���ҷ�Χ��Ϊ0ʱִ��ѭ�������
//	{
//		count++;    //count��¼���Ҵ���
//		mid = (left + right) / 2;    //���м�λ��
//		if (arr[mid] > tofind)   
//			right = mid - 1;   
//		else if (arr[mid] < tofind)    //key �����м�ֵʱ
//			left = mid + 1;    //ȷ�����ӱ�Χ
//		else if (arr[mid] = tofind)    //��key�����м�ֵʱ��֤�����ҳɹ�
//		{
//			printf("���ҳɹ�!\n ���� %d ��!a[%d]=%d", count, mid, tofind);    //������Ҵ�����������Ԫ���������е�λ��
//			count1++;    //count1��¼���ҳɹ�����
//			break;
//		}
//	}
//	if (count1 == 0)    //�ж��Ƿ����ʧ��
//		printf("����ʧ��!");    //����ʧ�����no found
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 0,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//
//	int ret = binary_search(arr, size, 0);    //�����Զ��庯��
//	printf("\n");
//	system("pause");
//	return 0;
//}

// �����������
//int main() {
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 1; i < 2 * n - 1; i = i + 2) {
//		for (j = 2*n; j > 2 * n - i; j--) {
//			printf("*");
//		}
//		printf("\n");  // ��ӡ�ϰ벿��
//	}
//
//	for (i = 0; i < 2*n; i = i+2) {
//		for (j = 1; j < 2*n-i; j++) {
//			printf("*");  
//		}
//		printf("\n");  //��ӡ�°벿��
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



