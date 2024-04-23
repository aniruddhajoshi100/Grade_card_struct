#include<stdio.h>
#include"full.h"
#include<math.h>
void sgpa(){
    printf("\033[1;1H\033[2J");
    printf("enter rollno: ");
    int rn=0;
    scanf("%d",&rn);
    int totals[5];
    for(int i=0;i<5;i++){
        round(totals[i]=(s[rn].isa1[i]/2)+(s[rn].isa2[i]/2)+(s[rn].esa[i]/2)+(s[rn].internal[i]));
    }
    int grades[5];
    for(int i=0;i<5;i++){
        if(totals[i]>90 && totals[i]<=100){
            grades[i]=10;
        }
        else if(totals[i]>80 && totals[i]<=90){
            grades[i]=9;
        }
        else if(totals[i]>70 && totals[i]<=80){
            grades[i]=8;
        }
        else if(totals[i]>60 && totals[i]<=70){
            grades[i]=7;
        }
        else if(totals[i]>50 && totals[i]<=60){
            grades[i]=6;
        }
        else if(totals[i]>40 && totals[i]<=50){
            grades[i]=5;
        }
        else{
            grades[i]=0;
        }
    }
    float sg=(grades[0]*5 + grades[1]*5 + grades[2]*4 + grades[3]*4 + grades[4]*3)/21.0;
    printf("Your sgpa is: %.2f\n",sg);
    printf("\n");
}