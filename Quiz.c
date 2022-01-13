
#include <stdio.h>

int main()
{
    int a;
    printf("Please Enter which exam you've passed\npress 1 for science and math both\n press 2 for maths\n press 3 for science\n");

    scanf("%d" , &a);
    printf("You entered %d\n" , a);

    if (a==1)
    {
        printf("Congrates you won Rs.45 gift for passing in Science & Maths both\n");
    }

    else if (a==2)
    {
        printf("Congrates you won Rs.15 gift for passing in Maths\n");
    }

    else
    {
        printf("Congrates you won Rs.15 gift for passing in Science\n");
    }
    
    
    
}

