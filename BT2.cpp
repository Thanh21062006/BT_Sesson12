#include <stdio.h>
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size = sizeof(array)/sizeof(int);
void showAray();

int main() {
	showAray();
	return 0;
}

void showAray(){
	printf("array[%d] = ", size);
	for(int i = 0;i < size;i++){
		printf("%d ", array[i]);
	}
	return;
}
