#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
	int inv_count = 0; 
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			if (arr[i] > arr[j]) 
				inv_count++; 
	return inv_count; 
} 
void main() 
{ 
	int arr[50], n,t;
	printf("Enter the number of test cases\n");
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		printf("Enter the array size : ");
		scanf("%d",&n);
		printf("Enter the elements\n");
		for(int j=0;j<n;j++)
			scanf("%d",&arr[j]);
		printf("Number of inversions are %d \n", getInvCount(arr, n)); 
		printf("------------------------------\n");
	}
} 

