
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//
////int Binarysearch(int arr[], int size, int tofind) {  //�Զ��庯��
////	int left = 0;
//	int right = size - 1;  
//	int count = 0;
//	while (left <= right) {   
//		count++;  //��¼���Ҵ���
//		int mid = (left + right) / 2;  // �м�Ԫ��
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
//	printf("û���ҵ�\n");  // ѭ��������δ�ҵ��������δ�ҵ�
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
//
// �����������
//int main() {
//	int i, j, n;  // nΪҪ���������ֵ��һ��
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
// ��������Ϸ
//
//void menu() {
//
//	printf("***************************\n");
//	printf("******1 ��ʼ��Ϸ***********\n");
//	printf("******0 �˳���Ϸ***********\n");
//	printf("***************************\n");
//}
//
//
//void game() {
//	int A;
//	int  target = rand() % 100 + 1;
//	while (1) {
//		printf("������һ������");
//		scanf("%d", &A);
//		if (target > A) {
//			printf("����\n");
//
//		}
//		else if (target < A) {
//			printf("����\n");
//
//		}
//		else if (target == A) {
//			printf("�¶���\n");
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
//			printf("������������");
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
//		printf("���������룺");
//		scanf("%s", input);
//		if (0 == (char)strcmp(input, "woshizhu")) {
//			printf("����ͨ��\n");
//			break;
//		}
//		else
//		{
//			k--;
//			printf("�����������ٴ����룬������%d����\n", k);
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
//		 ����Сд�������Ӧ��д��ĸ
//		printf("%c\n", temp - 32);
//	else if (temp >= 65 && temp <= 90) {
//		printf("%c\n", temp + 32);   // �����д��ĸ�������ӦСд��ĸ
//	}
//	else {
//		printf("�����������");
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
//                               //           ��������С�ĳ˷��ھ���
//int mult(int n) {
//	int i = 0;
//	int j = 0;
//	int mult = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {      // ע������
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
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	mult(n);
//	system("pause");
//	return 0;
//}
//
//
//				//					�ú����������ֽ���
//int temp(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	return 0;
//}
//
//// ������
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
//										�ú����ж�����
//
//int leapyear(int x) {
//	if (x % 400 == 0) {
//		printf("%d������\n",x);
//	
//	}
//	else if (x % 100 != 0 && x % 4 == 0) {
//		printf("%d������\n", x);
//		
//	}
//	else {
//		printf("%d��������\n", x);
//	}
//	return 0;
//}
//
//int main() {
//	int year = 0;
//	printf("������һ����ݣ�");
//	scanf("%d", &year);
//	leapyear(year);
//	system("pause");
//	return 0;
//}
//
// ��ʼ������
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
//// ������ֺ���
//int empty(int arr[], int size) {
//	int i = 0;
//	for (i = 0; i <= size - 1; i++) {
//		arr[i] = '\0';
//	}
//	return 0;
//}
//
//// ת������
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
//	// ��������
//	int a = 0;
//	int arr[] = { 0 };
//	printf("���������鳤�ȣ�");
//	scanf("%d", &a);
//	printf("�����볤��Ϊ%d������Ԫ��:", a);
//	int size = a;
//	init( arr,a);
//	// ������� �� ת������
//	int b = 0;
//	printf("0 ����������֣�1������������");
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
// �ж������ĺ���
//int prime_num(int x) {
//	int i = 0;
//	int a = 0;
//	for (i = 2; i < x; i++) {
//		if (x % i == 0) {
//			a++;
//		}
//	}
//	if (a == 0) {
//		printf("%d������\n", x);
//	}
//	else{
//		printf("%d��������\n", x);
//	}
//	
//	return 0;
//}
//int main() {
//	int num;
//	printf("������һ������");
//	scanf("%d", &num);
//	prime_num(num);
//
//	system("pause");
//	return 0;
//}
//
//
