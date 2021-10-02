// Chef will have N guests in his house today. He wants to serve atleast one dish to each one of the N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make first type of dish and one vegetable and one fish to make second type of dish.Now Chef has A fruits, B vegetables and C fishes in his house. Can he prepare at least N dishes in total?

// algo: B>=N
// A+C>=N
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c;
    printf("Enter the number of guests:\n");
    scanf("%d", &n);
    printf("Enter the number of vegetabes, fruits, fishes:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= n && (a + c) >= n)
    {
        printf("Yes, Chef can feed all guests.\n");
    }
    else
    {
        printf("Sorry, Chef cannot feed all guests\n");
    }
    return 0;
}