#include <stdio.h>

int main()
{
    //code//
    int input, num;
    char symbol;

    printf("Select the operation (+,-,*,/):\nEnter q for quit\nPlease do not try any type of decimal operation this calc under devlopment\n");
    scanf("%c", &symbol);

    switch (symbol)
    {
    case 'q':
        printf("Quitting the program\n");
        goto end;
        break;

    case '+':
        printf("Enter first value\n");
        scanf("%d", &input);
        printf("Enetr second value\n");
        scanf("%d", &num);
        printf("%d + %d = %d", input, num, input + num);
        break;

    case '-':
        printf("Enter first value\n");
        scanf("%d", &input);
        printf("Enetr second value\n");
        scanf("%d", &num);
        printf("%d - %d = %d", input, num, input - num);
        break;

    case '*':
        printf("Enter first value\n");
        scanf("%d", &input);
        printf("Enetr second value\n");
        scanf("%d", &num);
        printf("%d * %d = %d", input, num, input * num);
        break;

    case '/':
        printf("Enter first value\n");
        scanf("%d", &input);
        printf("Enetr second value\n");
        scanf("%d", &num);
        printf("%d / %d = %d", input, num, input / num);
        break;
        
    default:
        printf("You enter any wrong key or any type of decimal operation");
        break;
    }

    end:

    return 0;
}
