#include <stdio.h>
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int arr[], int n){
int i, j;
for (i = 0; i < n-1; i++)	
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main(){
	int a[] = {31, 11, 23, 17, 13, 89, 91, 3, 75, 1, 99, 63, 41, 71,
	93, 7, 21, 19, 15, 33};
	int n = sizeof(a)/sizeof(a[0]);
	bubbleSort(a, n);
	printf("Sorted array: \n");
	printArray(a, n);
	return 0;
}