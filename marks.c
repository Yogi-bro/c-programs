#include<stdio.h>
int main(){
    int marks;
    system("clr");
printf("enter your marks");
scanf("%d",&marks);
if(marks>90)
    printf("Grade-A");
else if (marks>80)
    printf("Grade-B");
else if (marks>70)
    printf("Grade-C");
else if (marks>60)
    printf("Grade-D");
else
    printf("Grade-E");
    system("pause");
//logically whole if-else block is considered as one instruction

return 0;
}
