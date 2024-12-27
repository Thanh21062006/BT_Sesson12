#include <stdio.h>

int factorial(int a);

int main() {
	int x = 5;
	printf("giai thua cua %d la: %d", x, factorial(x));
	
	return 0;
}

int factorial(int a){
	int total = 1;
	for(int i = 1;i <= a;i++){
		total *= i;
	}
	return total;
}
