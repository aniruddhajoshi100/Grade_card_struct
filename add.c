#include<stdio.h>
#include"full.h"
void add(){
    printf("\033[1;1H\033[2J");
    printf("Enter rollno: ");
    int r=0;
    scanf("%d",&r);
    s[r].roll=r;
    printf("Enter student's name: ");
    scanf("%s",s[r].name);
    for(int i=0;i<5;i++){
        printf("Enter %s marks:\n",sub[i]);
        printf("Isa1: ");
        scanf("%d",&s[r].isa1[i]);
        printf("Isa2: ");
        scanf("%d",&s[r].isa2[i]);
        printf("Esa: ");
        scanf("%d",&s[r].esa[i]);
        printf("Interal: ");
        scanf("%d",&s[r].internal[i]);
    }
    printf("Succssesfully added\n");
    printf("\n");
}