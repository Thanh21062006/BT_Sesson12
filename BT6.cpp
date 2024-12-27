#include <stdio.h>

int perfectNumber(int a);

int main() {
	int a, b;
	printf("Moi ban nhap vao so a de kiem tra: ");
	scanf("%d", &a);
	if(perfectNumber(a)){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	
	printf("Moi ban nhap vao so b de kiem tra: ");
	scanf("%d", &b);
	if(perfectNumber(b)){
		printf("True");
	}
	else{
		printf("False");
	}
		
	return 0;
}

int perfectNumber(int a){
	int total = 0;
	for(int i = 1;i < a;i++){
		if(a % i == 0){
			total += i;
		}
	}
	if(total == a){
		return 1;
	}
	else{
		return 0;
	}
};
