#include<stdio.h>
#include<string.h>

void sort(int,char[10][20],int[]);

void main(){
    
    int age[10],n;
    char name[10][20];

    printf("enter no of employees : ");
    scanf("%d",&n);

    //data input
    for (int i = 0; i < n; i++)
    {
        printf("enter name of employee  no %d :",i+1);
        scanf("%s",name[i]);
        printf("enter age of %s : ",name[i]);
        scanf("%d",&age[i]);
    }

    //before sort
    printf("\n-----------------------\n");
    printf("\t BEFORE \nno.\tname\tage");
    printf("\n-----------------------\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n",i+1,name[i],age[i]);
    }

    //sorting call
    sort(n,name,age);

    //lower age
    printf("\n-----------------------\n");
    printf("Lower age is %d  name : %s ",age[0],name[0]);
    printf("\n-----------------------\n");

    //upper age
    printf("\n-----------------------\n");
    printf("Upper age is %d  name : %s ",age[n-1],name[n-1]);
    printf("\n-----------------------\n");
      
}

//sorting
void sort(int n,char y[n][20],int x[n]){
    int temp1;
    
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(x[i] > x[j]){

                temp1 = x[j];
                x[j] = x[i];
                x[i] = temp1;
                
                char temp2[10];
                strcpy(temp2,y[j]);
                strcpy(y[j],y[i]);
                strcpy(y[i],temp2);

            }
        }
    }

    //after sort
    printf("\n-----------------------\n");
    printf("\t AFTER\nno.\tname\tage");
    printf("\n-----------------------\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n",i+1,y[i],x[i]);
    }
}