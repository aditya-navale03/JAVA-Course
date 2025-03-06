#include<stdio.h>

int main() {

	int size,arr[100];

printf("enter how many elements to enter: ");
scanf("%d",&size);

//enter array elements
printf("enter array elements: ");
for(int i = 0; i<size; i++) {
scanf("%d",&arr[i]);

}


//print
printf("array elements are: ");
for(int i = 0; i<size;i++) {

printf("%d",arr[i]);
}

//sorting alogrithm
for(int i = 0;i < size; i++) {

	for(int j = 0;j<size-1;j++) {
	
	if(arr[j+1] < arr[j]) {
	
	int temp =  arr[j+1];
       arr[j+1] = arr[j];
	arr[j] = temp;       
	
		}
	}
}

printf("\nsorted array:");
for(int i = 0;i< size; i++) {
	if(arr[i] % 2 == 0) {
printf("%d\t",arr[i]);
}
}

}
