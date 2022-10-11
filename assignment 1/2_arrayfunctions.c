#include<stdio.h>

void read(int,int,int (*)[][10]);
void print(int,int,int (*)[][10]);
void sum(int,int,int (*)[][10],int (*)[][10],int (*)[][10]);
void product(int,int,int (*)[][10],int (*)[][10],int (*)[][10]);
void identity(int,int ,int (*)[][10]);

void main(){

    int m1,n1,m2,n2;
    int a[10][10],b[10][10],c[10][10],d[10][10];

    //First 2D array
    printf("First 2D array\n");
    printf("Enter the no of rows: ");
    scanf("%d",&m1);
    printf("Enter the no of cols: ");
    scanf("%d",&n1);

    read(m1,n1,&a);
    print(m1,n1,&a);
    identity(m1,n1,&a);
    printf("----------------------------\n");


    //Second 2D array
    printf("Secondo 2D array\n");
    printf("Enter the no of rows: ");
    scanf("%d",&m2);
    printf("Enter the no of cols: ");
    scanf("%d",&n2);

    read(m2,n2,&b);
    print(m2,n2,&b);
    identity(m2,n2,&b);
    printf("----------------------------\n");


    //Sum of 2D array
    sum(m1,n2,&a,&b,&c);
    printf("sum of ");
    print(m1,n2,&c);
    identity(m1,n2,&c);
    printf("----------------------------\n");


    //Product of 2D array
    product(m1,n2,&a,&b,&d);
    printf("product of ");
    print(m1,n2,&d);
    identity(m1,n2,&d);
    printf("----------------------------\n");


}

//Reading 2D array function
void read(int a,int b, int (*c)[a][b]){
    int x=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++,x++){
            printf("enter element no %d : ",x);
            scanf("%d",c[i][j]);
        }
    }
}

//Printing 2D array function
void print(int x,int y,int (*z)[x][y]){
    printf("\nthe %dX%d matrix is :\n\n",x,y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d\t",*z[i][j]);
        }
        printf("\n");
    }
}

//Adding 2D arrays function
void sum(int m,int n,int (*a)[m][n],int (*b)[m][n],int (*c)[m][n]){
    int x,y;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *c[i][j]=*a[i][j]+*b[i][j];
        }
    }
}



//Multiplying 2D arrays function
void product(int m,int n,int (*a)[m][n],int (*b)[m][n],int (*c)[m][n]){
    int x,y,z;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *c[i][j]=0;
            z=0;
            for (int k = 0; k < n; k++){
                
                *c[i][j]+=*a[i][k] * *b[k][j];
            }
        }  
    }
}


//Checking if identity matrix function
void identity(int m,int n,int (*a)[m][n]){
    int flag=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(*a[i][j]!=1){
                    flag=0;
                    break;
                }
            }
            else {
                if(*a[i][j]!=0){
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag) printf("\nIt is an Identity Matrix\n");
    else printf("\nIt is NOT an Identity Matrix\n");
    
}