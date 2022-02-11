#include <stdio.h>

int main()
{
    int count;
    int iter;
    int sum;
    scanf("%d", &count);
    while(count!=0){
        scanf("%d", &iter);
        sum = iter + sum;
        count--;
    }
    printf("%d", sum);
    return 0;
}
