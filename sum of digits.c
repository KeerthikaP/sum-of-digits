#include <stdio.h>
int sum(int);
int main()
{
    int number, result;
    printf("Enter the number to find the sum: ");
    scanf("%d", &number);
    result = sum(number);
    printf("Sum of digits in %d is %d\n", number, result);
    return 0;
}
int sum(int number)
{
    if (number != 0)
    {
        return (number % 10 + sum (number / 10));
    }
     else
    {
       return 0;
    }
}
