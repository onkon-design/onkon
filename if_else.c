#include<stdio.h>

int main()
{
    int a1,a2;
    char op;
    printf("Enter two number: ");
    scanf("%d %d", &a1, &a2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %C", &op);

    if (op == '+'){
        printf("Result = %d\n", a1 + a2);
    }
    else if (op == '-'){
        printf("Result = %d\n", a1 - a2);
    }
    else if (op == '*'){
        printf("Result = %d\n", a1 * a2);
    }
    else if (op == '/'){ 
        printf("Result = %d\n", a1 / a2);
    }
    else {
        printf("Invalid operator\n");
    }   

    return 0;

}