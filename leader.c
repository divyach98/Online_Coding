#include <stdio.h>
void main()
{
    	int i,t,arr[100],n,max[100],j=0,k;
	printf("Enter the test cases\n");
	scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
	printf("Enter size of array\n");
    	scanf("%d",&n);
	printf("Enter array elements\n");
    	for(i=0; i<n; i++)
    	{
        	scanf("%d",&arr[i]);
      	 	max[i]=0;
    	}
    	max[j++] = arr[n-1];
    	for(i=n-1; i>=0; i=i-1)
        	if( arr[i] >= max[j-1] )
        	{
            		max[j] = arr[i];
            		j++;
        	}
	printf("OUTPUT : ");
    	for(j=j-1; j>0; j--)
        	printf("%d ",max[j]);
	printf("\n-------------------------------------------\n");
	}
}
