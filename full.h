struct student{
    int roll;
    char name[50];
    int isa1[5];
    int isa2[5];
    int esa[5];
    int internal[5];
};
extern struct student s[10];
extern char sub[5][20];
void display();
void add();
void update();
void sgpa();