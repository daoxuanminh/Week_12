#include <stdio.h>
void SubArray (int *q){
	int *p;
	for (int i=0;i<5;i++,q++){
		for (int j=0;j<5-i;j++){
			p = q;
			for (int h=0;h<=j;h++){
				printf ("%d ",*p++);
			}
			printf ("\n");
		}
	}
}
int main (){
	int a[5]={1,2,3,4,5};
	SubArray (a);
	return 0;
}
