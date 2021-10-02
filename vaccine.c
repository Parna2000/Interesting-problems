// Chef has taken his first dose of vaccine D days ago. The prescribed range for taking the dose is between L and R days(both inclusive) from the date of administration of the first dose. Determine if the Chef is too early, too late, or in the correct range for taking his dose.
#include <stdio.h>

int main()
{
    int d, l, r;
    printf("Enter the number of days before which Chef has taken his first dose:\n");
    scanf("%d", &d);
    printf("Enter the lower limit of the range:\n");
    scanf("%d", &l);
    printf("Enter the upper limit:\n");
    scanf("%d", &r);
    if (d >= l && d <= r)
    {
        printf("Correct Range\n");
    }
    else if (d < l)
    {
        printf("Too early\n");
    }
    else if (d > r)
    {
        printf("Too late\n");
    }
    return 0;
}