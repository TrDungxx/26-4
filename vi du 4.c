//
// Created by Administrator on 4/26/2024.
//
#include <stdio.h>
int performOperation(int num1, int num2, char operator){
    int result;

    switch(operator){
        case'+':
            result = num1 + num2;
            break;
        case'-':
            result= num1 - num2;
            break;
        case '*':
            result= num1 * num2;
            break;
        case'/':
            result= num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            result = 0;

    }
    return result;
}
//int caculator3(){
int main (){
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter an operator (+,_,*,/): ");
    scanf(" %c",&operator);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = performOperation(num1, num2, operator);
    printf("Result: %d\n",result);
    return 0;
}