#include<stdio.h>
void print(int,int[5]);

void main(){
    int x=1,choice,front=-1,last=-1,array[5];

    while(x){
        printf("\n1.Add element\n2.Remove element\n3.Exit\nEnter your choise :");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
                if(last==4){
                    printf("Array is full");
                    printf("\n------------------------\n");
                }
                else{
                    last++;
                    printf("Enter the element :");
                    scanf("%d",&array[last]);
                    print(last,array);
                }
                break;
            case 2 :
                if(last==front) {
                    printf("Array is empty");
                    printf("\n------------------------\n");
                }
                else {
                    last--;
                    for (int i = 0; i <= last; i++)
                    {
                        array[i]=array[i+1];
                    }
                    
                    printf("element removed\n");
                    print(last,array);
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

void print(int last,int array[last]){  

    printf("\tThe array is\n");

    for (int i = 0; i <= last; i++)
        printf("%d\t",array[i]);
    printf("\n------------------------\n");
}