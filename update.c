#include<stdio.h>
#include"full.h"
void update(){
    printf("\033[1;1H\033[2J");
    printf("Enter rollno of student to update: ");
    int rn=0;
    scanf("%d",&rn);
    printf("Enter:\n1 To update Isa1 marks\n2 To update Isa2 makrs\n3 To update Esa marks\n4 To update internal marks\n");
    int n1;
    scanf("%d",&n1);
    printf("Enter:\n1 To update C marks\n2 To update Physics marks\n3 To update Maths marks\n4 To update Electrical marks\n5 To update Mechanical marks\n");
    int n2;
    scanf("%d",&n2);
    switch(n1){
        case 1:
            printf("Current %s marks: %d\n",sub[n2-1],s[rn].isa1[n2-1]);
            printf("Re-enter Isa1 %s marks: ",sub[n2-1]);
            scanf("%d",&s[rn].isa1[n2-1]);
            break;
        case 2:
            printf("Current %s marks: %d\n",sub[n2-1],s[rn].isa2[n2-1]);
            printf("Re-enter Isa2 %s marks: ",sub[n2-1]);
            scanf("%d",&s[rn].isa2[n2-1]);
            break;
        case 3:
            printf("Current %s marks: %d\n",sub[n2-1],s[rn].esa[n2-1]);
            printf("Re-enter Esa %s marks: ",sub[n2-1]);
            scanf("%d",&s[rn].esa[n2-1]);
            break;
        case 4:
            printf("Current %s internal marks: %d\n",sub[n2-1],s[rn].internal[n2-1]);
            printf("Re-enter internal %s marks: ",sub[n2-1]);
            scanf("%d",&s[rn].internal[n2-1]);
            break;
    }
    printf("Succssesfully updated\n");
    printf("\n");
}