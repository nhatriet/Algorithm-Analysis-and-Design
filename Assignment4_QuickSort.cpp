#include<stdio.h>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
int partition(int a[], int l, int r) {
	int pivot = a[l];
	int i = l - 1;
	int j = r + 1;
	while (true) {
		do {
			++i;
		}while(a[i] < pivot);
		do {
			--j;
		}while(a[j] > pivot);
		if (i < j) {
			swap(a[i], a[j]);
		}
		else return j;
	}
}
 
void quickSort(int a[], int l, int r) {
	if (l >= r) return;
	int p = partition(a, l, r);
	quickSort(a, l, p);
	quickSort(a, p + 1, r);
}
 
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int arr[] = {10, 80, 30, 60, 90, 40, 50, 70, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
