#include<stdio.h>

void main(){
    int n,x=1;

    printf("Enter the limit : ");
    scanf("%d",&n);

    FILE *f;

    if((f=fopen("file.txt","r+")) == NULL)//Checking if file exist
        f=fopen("file.txt","w+");   //Creating a file
    else
        fscanf(f,"%d",&x);          //Get the value in the file

    rewind(f);                      //Return to the beggining      
    fprintf(f,"%d",(x+n));          //Update value in the file
    fclose(f);                      //Closing the file

    //Printing the values
    for(int i = x ; i < x+n ; i++)
            printf("%d  ",i);

}