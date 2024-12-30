#include <stdio.h>

int maxArray(int array[], int size);

int main() {
	int array[10] = {1, 3, 6, 22, 9, 7, 8, 0, 10, 20};
	int size = sizeof(array)/sizeof(int);
	printf("So lon nhat trong mang la: %d",maxArray(array, size));
	return 0;
}

int maxArray(int array[], int size){
	int max = 0;
	for(int i = 0;i < size;i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	return max;
};
