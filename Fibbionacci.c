// Recursive Fibonacci program
// F(0)=0, F(1)=1, and for n ≥ 2, F(n)=F(n-1)+F(n-2)

#include <stdio.h>

// Recursive function
int fb(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    return fb(x - 1) + fb(x - 2);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fb(n));
    return 0;
}
