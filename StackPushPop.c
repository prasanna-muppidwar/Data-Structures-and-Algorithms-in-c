//Stack Practical by Prasanna Muppidwar
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 10
int topValue = -1, inp_array[Size];

void push();
void pop();
void show();

 int main(){
    int choice;
    while (1)
    {
       printf("\tStack : Push and Pop Implementation\n");
       printf("-----------------------------------------------------\n");
       printf("Enter 1 to Perform Push!\n");
       printf("Enter 2 to Pop Element!\n");
         printf("Enter 3 to Show!\n");
       printf("-----------------------------------------------------\n");
       printf("Enter Your Choice Code to Perform a Task:");
       scanf("%d",&choice);

       switch (choice)
       {
       case 1: 
        
        printf("We are in Push Function!\n");
        push();
       system("cls");
        break;
        case 2: 
        printf("We are in Pop Function!\n");
        pop();
        break;
        case 3: 
        printf("We are in Show Function!\n");
        show();
        break;
        case 4: 
        exit(0);
       default:
       printf("Enter Valid Inputs!");
        break;
       }
       

    }
    
 }
void push(){
int x;
if(topValue == Size -1){
    printf("We have No Space to Insert Data!");
}else{
    printf("Enter data to be Inserted in Stack:");
    scanf("%d",&x);

    topValue = topValue+1;
    inp_array[topValue] = x;
    printf("Data Inserted Succesfully!\n\n\n",x);
}
}
void pop(){
if (topValue ==-1)
{
  printf("Under flow");

}else{
    printf("\n         Element Popped!%d\n",inp_array[topValue]);
    topValue = topValue -1;
}

}
void show(){
    if (topValue == -1)
    {
        printf("UnderFlow");
    }else{
        printf("Elements Present in the stack:\n");
        for (int i = topValue; i >= 0; --i )       
        {
          printf("%d\n",inp_array[i]);
        }
        

    }
    
}