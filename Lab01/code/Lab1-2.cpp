#include <stdio.h>

int main()
{
    int g[3][4] = {
        {11, 22, 33, 44},
        {12, 23, 34, 45},
        {13, 24, 35, 46}};

    int(*j)[4] = g;

    j[1][3] = 99;

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 4; b++)
            printf("%d ", g[a][b]);
        printf("\n");
    }

    return 0;
}