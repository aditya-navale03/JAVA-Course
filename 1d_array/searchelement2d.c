#include<stdio.h>

int main() {

	//take size
	int columns, rows;
	int arr[3][3];
	printf("enter how many columns:");
	scanf("%d",&columns);
	printf("enter how many rows:");
	scanf("%d",&rows);

	//take input from user
	printf("enter array elements:");
	for(int i = 0;i<rows;i++) {
		for(int j = 0; j<columns; j++) {
		
		scanf("%d",&arr[i][j]);
		}
	}

	//print array
	printf("the array is:\n");
	for(int i = 0; i< rows; i++) {
		for(int j = 0;j< columns;j++) {
		
		printf("[%d]\t",arr[i][j]);
		}
	printf("\n");
	}

	//search element
	int number;
	printf("enter element to search:");
	scanf("%d",&number);
	
	//search element
	for(int i = 0;  i< rows; i++) {
		for(int j = 0; j< columns;j++) {
			if(arr[i][j] == number) {
			printf("element found at column:[%d],rows:[%d]\n",j,i);
			}
		}
	}
}
