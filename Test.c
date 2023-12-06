#include<stdio.h>
int main(){
     int marks;
     printf("enter marks:(0-100)");
     scanf("%d",&marks);
     if(marks <= 30){
        printf("fail");
     }else
     {
        printf("pass");
     }
     

    return 0;
}