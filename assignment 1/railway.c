#include<stdio.h>
#include<string.h>

void main(){

    int x,y=0,temp,num;
    char a[100];

    //input of number
    printf("Train number is ");
    scanf("%d",&x);
    
    temp=x;

    //inversing the number
    while(temp != 0){
        num=temp%10;
        y=(y*10)+num;
        temp=temp/10;
    }

    //Checking the last digit
    while(y != 0){
        num=y%10;
        y=y/10;

        //Converting and adding it to the main string 
        switch (num){
            case(0):strcat(a,"zero ");
                    break;
            case(1):strcat(a,"one ");
                    break;
            case(2):strcat(a,"two ");
                    break;
            case(3):strcat(a,"three ");
                    break;
            case(4):strcat(a,"four ");
                    break;
            case(5):strcat(a,"five ");
                    break;
            case(6):strcat(a,"six ");
                    break;
            case(7):strcat(a,"seven ");
                    break;
            case(8):strcat(a,"eight ");
                    break;
            case(9):strcat(a,"nine ");
                    break;
        }
    }

    //printing of the string
    printf("%s",a);


}