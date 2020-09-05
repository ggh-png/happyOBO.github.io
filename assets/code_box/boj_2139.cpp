#include <stdio.h>

int main(void) {
	int A;
	scanf("%d",&A);
	if(A%400==0){
		printf("1");
	}
	else if(A%100==0){
		printf("0");
	}
	else if(A%4==0){
		printf("1");
	}
	else{
		printf("0");
	}
	

	return 0;
}