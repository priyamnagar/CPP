#include<iostream>
using namespace std;


// Switch statement
int test_switch(){
    char grade;
    printf("Enter your grade(A-C) : ");
    scanf("%c",&grade);
    printf("\nYou entered : %c\n",grade);

    switch (grade)
    {
    case 'A' :
        printf("Your grade is A");
        break;
    case 'B' :
        printf("Your grade is B");
        break;
    case 'C' :
        printf("Your grade is C");
        break;
    default:
        printf("Invalid input!");
        break;
    }
    return 0;
}

//Conditional operator
int test_conditional(){
    
    int a = 10, b;
    b = a==10 ? 1 : 0;

    printf("Conditional Output: %d",b);
    return b;
}

int main(){

    //loops

    //while loop
    int a = 0;

    printf("While loop:\n");
    while(a<20){
        printf("%d ",a);
        a++;
    }

    //for loop
    printf("\nFor loop: \n");
    for( int i=0; i<20; i++ ){
        printf("%d ",i);
    }

    //do while loop
    a=0;
    printf("\ndo-while loop:\n");
    do{
        printf("%d ",a);
        a++;
    }while(a<20);

    //loop control statements

    //break statement
    for(int i=0; i<20;i++){
        if(i==5){
            printf("\nBroken\n");
            break;
        }
    }

    //continue
    for(int i=0;i<20;i++){
        if(i==1){
            printf("\nContinue\n");
            continue;
        }
        break;
    }

    //goto
    for(int i=0;i<20;i++){
        if(i==3){
            printf("\nGoto Label\n");
            goto label;
        }
        printf("%d ",i);
    }

    label:

    printf("Switch called\n");
    test_switch();

    printf("\nConditional operator\n");
    test_conditional();
    return 0;
}