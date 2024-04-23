#include<stdio.h>
#include"full.h"
struct student s[10];
char sub[5][20]={"C","Physics","Maths","Electrical","Mechanical"};
int main(){
    printf("\n");
        int n;
    do{
        printf("Menu:\nEnter 1 To check your results\nEnter 2 To add a student's details\nEnter 3 To update a student's results\nEnter 4 To check your sgpa\nEnter 5 To exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
               display();
            break;
            case 2:
                add();
                break;
            case 3:
                update();
                break;
            case 4:
                sgpa();
            case 5: 
                break;
        }
    }
    while(n!=5);
}  