#include <stdio.h>

int sum(int a,int b);

int main() {
	int a = 10,b = 11;
	printf("Tong hai so %d va %d la: %d", a, b, sum(a,b));
	
	return 0;
}

int sum(int a,int b){
	return a+b;
}
