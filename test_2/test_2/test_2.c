#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>


//              ����˷��ھ���

int main( ) {
	int i,j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%2d  ", i, j, j*i);
			if(i==j)
				printf("\n");

		}
	}	
	system("pause");
	return 0;
}

//            ��ӡ 1 �� 100 ������

//int main() {
//	int a,i ;
//	int jud = 0;
//	for (a = 2; a <= 100; a++) {
//		jud = 0;
//		for (i = 2; i <= a/2; i++) {
//			if (a % i == 0) {
//				jud = 1;
//				break;
//			
//			}
//		}
//		if (jud == 0)
//			printf("%d\n", a);
//	}
//	system("pause");
//	return 0;
//}
