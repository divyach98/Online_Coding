#include<stdio.h>
int remove_duplicate_elements(int arr[], int n)
{

    if (n==0 || n==1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
    temp[j++] = arr[n-1];

    for (i=0; i<j; i++)
        arr[i] = temp[i];

    return j;
}
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter lements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    n = remove_duplicate_elements(arr, n);
    printf("results :\n");	

    for (i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
