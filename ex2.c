#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[]={12,23,34,45,56,67,78,89,90};
	int *p;
	p=a;
	printf("a- %d:\n",*p+2);
	printf("b- %d:\n",*(p+2));
	printf("c- %x:\n",&p+1);
	printf("d- %d:\n",*(&a[4]-3));
	printf("e- %d:\n",*(a+3));
	printf("f- %d:\n",&a[7]-p);
	printf("g- %d:\n",p+(*p-10));
	printf("h- %d:\n",*(p+*(p+8)-a[7]));
	return 0;
}
