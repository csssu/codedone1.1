#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    ans += n / 100;
    n = n % 100;
    ans += n / 20;
    n = n % 20;
    ans += n / 10;
    n = n % 10;
    ans += n / 5;
    n = n % 5;
    ans += n / 1;

    printf("%d", ans);
    return 0;
}