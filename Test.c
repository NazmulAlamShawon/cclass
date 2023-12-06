#include<stdio.h>

 int main (){
    int day; // 1-mon ;
    printf("enter day(1-7) :");
    scanf("%d",&day);
     switch (day)
     {
     case 1: printf("monday \n");
        /* code */
        break;
        case 2: printf("tuesday \n");
        /* code */
        break;
        case 3: printf("wednesday \n");
        /* code */
        break;
        case 4: printf("thursday \n");        /* code */
        break;
        case 5: printf("friday \n"); /* code */
        /* code */
        break;
        case 6: printf("saturday \n"); /* code */
        /* code */
        break;
        
        case 7: printf("sunday \n"); /* code */
        /* code */
        break;
     default:("not valid date");
        
     }
    return 0;
 }