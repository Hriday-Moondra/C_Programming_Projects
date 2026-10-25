#include<stdio.h>

int main()
{
    int a,b,choice;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("\nMENU");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Addition is = %d",a+b);
            break;

        case 2:
            printf("Subtraction is = %d",a-b);
            break;

        case 3:
            printf("Multiplication is = %d",a*b);
            break;

        case 4:
            if(b!=0)
                printf("Division is = %.2f",(float)a/b);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}