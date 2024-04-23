#include<stdio.h>
#include"full.h"
#include<string.h>
void display(){
    printf("\033[1;1H\033[2J");
    printf("Enter the student's name to search: ");
    char n[50];
    scanf("%s",n);
    int f=0;
    for(int i=0;i<10;i++){
        if(strcmp(s[i].name,n)==0){
            for(int j=0;j<5;j++){
                printf("%s: ",sub[j]);
                printf("Isa1=%d,Isa2=%d,Esa=%d,Internal=%d\n",s[i].isa1[j],s[i].isa2[j],s[i].esa[j],s[i].internal[j]);
            }
            f++;
        }
    }
    if(f==0){
        printf("Student not found\n");
    }
    printf("\n");
}