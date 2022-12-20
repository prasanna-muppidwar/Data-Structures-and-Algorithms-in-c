//Bubble Sort
#include<stdio.h>  
#include<conio.h>

int binarySearch(int arr[], int l, int r, int x){
    if(r >= l){
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void){
    int limit , x;
   printf("-----------------------------------------------------\n");
   printf("\t\tBinary Search \n");
   printf("-----------------------------------------------------\n");
 printf("Enter Limit of Numbers to be Search:");
    scanf("%d",&limit);

    int arr[limit];
    printf("Enter the Number to Implement search:");
    for (int i = 0; i < limit; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Entered Array:");
    for (int i = 0; i < limit; i++)
    {
       printf("%d",arr[i]);
       printf("\n");
    }
    printf("Enter the Value to Search:");
    scanf("%d",&x);
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
    printf("Element is not present in Array"); 
    else
    printf("Element is present at index %d", result);
    
    return 0;
}
