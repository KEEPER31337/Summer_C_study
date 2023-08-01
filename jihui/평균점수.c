#include <stdio.h>

int main(void)
{
    int sum = 0, score;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&score);
        if (score<=40)
        {
            sum +=40;
        }
        else
        {
            sum+=score;
        }
    }
    printf("%d",sum/5);
    return 0;
}
