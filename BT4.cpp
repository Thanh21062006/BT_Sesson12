#include <stdio.h>

int array[10] = {1, 3, 6, 22, 9, 7, 8, 0, 10, 20};
int maxArray(void);

int main() {
	printf("So lon nhat trong mang la: %d",maxArray());
	return 0;
}

int maxArray(void){
	int max = 0;
	for(int i = 0;i < sizeof(array)/sizeof(int);i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	return max;
}
