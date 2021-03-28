#include<stdio.h>
#include<stdlib.h>

void Addition(){

    int a ,b ,add;
    system("cls");
    printf("Enter first Two Numbers::");
    scanf("%d %d",&a,&b);
    add = a+b;
    printf("Addition of %d and %d is :: %d\n\n",a,b,add);
    system("pause");
}

int main(){

    int choice;
    int no;


    while(scanf("%d",&no)){
        system("cls");
        printf("\nMenu");
        printf("\n1. Addition \n2. Subtraction \n3. Division \n4. Exit");
        printf("\nEnter your choice::");
        scanf("%d",&choice);

        switch(choice){

        case 1:
            Addition();
            break;

        case 4:
            exit(0);

        default:
            printf("Plz inter valid option");

        }

    }
}
