#include <stdio.h>
#include <stdlib.h>

/*
用“*”输出一个菱形图案
*/

int main()
{
    int num, n = 4;

    printf("请输入参数：");
    scanf("%d", &num);

    for(int i = 1, j = 0; i <= num; i++, j++)
    {
        int a, b, c;

        if(i <= num / 2)
        {
            a = num / 2 + 1;
            b = -i;
            c = i + j;
        }else if(i > num / 2 + 1)
        {
            a = i;
            b = -(num / 2 + 1);
            c = i + j - n;
            n += 4;
        }else
        {
            for(int m = 0; m < num; m++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }

        for(int k = 0; k < a + b; k++)
        {
            printf(" ");
        }
        for(int l = 0; l < c; l++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
