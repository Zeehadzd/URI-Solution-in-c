#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    printf("VOLUME = %.3lf\n",(4 * 3.14159 * pow(i, 3))/3);

    return 0;
}
