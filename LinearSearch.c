//Linear Search
#include<stdio.h>

int search(int arr[],int n,int x,int limit){
    for (int i = 0; i < limit; i++)
    
       if (arr[i] == x)
        return i;
        return -1;
       }

       int main(){
        int limit,x;
   printf("-----------------------------------------------------\n");
   printf("\t\tLinear Search \n");
   printf("-----------------------------------------------------\n");
   printf("Enter Limit of Numbers to be Search:");
    scanf("%d",&limit);

    int arr[limit];
    printf("Enter the Number to Implement search:");
    for (int i = 0; i < limit; i++)
    {
       scanf("%d",&arr[i]);
    }
 
    printf("Enter the Value to Search:");
    scanf("%d",&x);
    int n = sizeof(arr)/sizeof(arr[0]);
    int result =  (arr,n,x);
    if(result == -1)
    printf("Element not Found");
    else
    printf("Element Found at index:%d",result);

    }
       