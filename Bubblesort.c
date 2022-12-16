#include<stdio.h>

int main(){
    int limit,i,j;
     printf("-----------------------------------------------------\n");
   printf("\t\tBubble Sort Implementation\n");
   printf("-----------------------------------------------------\n");
    printf("Enter Limit of Numbers to be Stored and Sorted:");
    scanf("%d",&limit);

    int arr[limit];
    printf("Enter the Numbers for Sorting:");
    for ( i = 0; i < limit; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Unsorted Array:");
    for ( i = 0; i < limit; i++)
    {
       printf("%d",arr[i]);
    }
    for ( i = 0; i < limit; i++)
    {
       for ( j = 0; j < limit-i-1; j++)
       {
       if (arr[j]>arr[j+1])
       {
       int temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1]=temp;
       }
       }
    }
    printf("\n Sorted Format:");
    for ( i = 0; i < limit; i++)
    {
       printf("%d",arr[i]);  

    }
    
    
}