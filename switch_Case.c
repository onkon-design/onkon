#include<stdio.h>

int main()
{
    int a1,a2;
    char op;
    printf("Enter two number: ");
    scanf("%d %d", &a1, &a2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %C", &op);

    switch (op)
    {
     case '+':
        printf("Result = %d\n", a1 + a2);
        break;
     case '-':
        printf("Result = %d\n", a1 - a2);
        break;       
     case '*':
        printf("Result = %d\n",  a1 * a2);
        break;
     case '/':
        printf("Result = %d\n", a1 / a2);
        break;
     default:  
        printf("Invalid operator\n");
        break;
    }
    
    return 0;
}