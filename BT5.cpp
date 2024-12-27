#include <stdio.h>

int primeNumber(int a);

int main() {
	int a, b;
	printf("Moi ban nhap vao so a de kiem tra: ");
	scanf("%d", &a);
	if(primeNumber(a)){
		printf("True\n");
	}
	else{
		printf("False");
	}
	
	printf("Moi ban nhap vao so b de kiem tra: ");
	scanf("%d", &b);
	if(primeNumber(b)){
		printf("True\n");
	}
	else{
		printf("False");
	}
}

int primeNumber(int a){
	if(a < 2){
		return 0;
	}
	for(int i = 2;i*i <= a;i++){
		if(i % a == 0){
			return 0;
		}
	}
	return 1;
};
