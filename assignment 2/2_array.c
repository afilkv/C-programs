#include<stdio.h>
void print(int,int[5]);

void main(){
    int x=1,choice,top=-1,array[5];

    while(x){
        printf("\n1.Add element\n2.Remove element\n3.Exit\nEnter your choise :");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
                if(top==4){
                    printf("Array is full");
                    printf("\n------------------------\n");
                }
                else{
                    top++;
                    printf("Enter the element :");
                    scanf("%d",&array[top]);
                    print(top,array);
                }
                break;
            case 2 :
                if(top==-1) {
                    printf("Array is empty");
                    printf("\n------------------------\n");
                }
                else {
                    top--;
                    printf("element removed\n");
                    print(top,array);
                }
                break;
            case 3 :
                x=0;
                break;
            default :
                printf("Invalid input");
                printf("\n------------------------\n");

        }
    }
}

void print(int top,int array[5]){  

    printf("\tThe array is \n");

    for (int i = 0; i < top+1; i++)
        printf("%d\t",array[i]);
    printf("\n------------------------\n");
}