#include <stdio.h>

int main(){
    int num1, num2, action;
    float result;
    printf("\nEnter first number : ");
    scanf(" %i", &num1);
    printf("\nEnter second number : ");
    scanf(" %i", &num2);
    printf("\nSelect operation : ");
    printf("\n\t1 : Addition");
    printf("\n\t2 : Subtraction");
    printf("\n\t3 : Multiplication");
    printf("\n\t4 : Division");
    printf("\n\t--------------------");
    printf("\n\t0 : Exit");
    printf("\nOperation : ");
    scanf(" %i", &action);
    switch(action){
        case 0:
            return 0;
        case 1:
            result = num1 + num2;
            printf("\n\nResult : %f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n\nResult : %f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n\nResult : %f", result);
            break;
        case 4:
            result = num1 / num2;
            printf("\n\nResult : %f", result);
            break;
        default:
            printf("Invalid Action!");
            return 0;
    }
    return 0;
}