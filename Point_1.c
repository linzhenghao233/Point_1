#include <stdio.h>

//int main(void) {
//	int* p;	//p�Ǹ��������֣�int*��ʾ��p����ֻ�ܴ洢int���ͱ����ĵ�ַ
//	int i = 10;
//	int j;
//
//	p = &i;
//	j = *p;
//	printf("i = %d, j = %d, *p = %d\n", i, j, *p);
//	//i = 10, j = 10, *p = 10
//
//	//p = 10;	//error
//
//	return 0;
//}

//void f(int* p) {
//	*p = 100;
//}
//
//int main(void) {
//	int i = 9;
//
//	f(&i);
//	printf("i = %d\n", i);	//i = 100
//	
//	return 0;
//}

int main(void) {
	int a[5] = { 1, 2, 3, 4, 5 };

	//a[3] == *(3 + a);
	3[a];//����д�ǿ��Ե�

	return 0;
}
