#include <stdio.h>

int main()
{
    int count;
    int iter=1;
    scanf("%d", &count);
    while(count!=0){
        iter=iter*count;
        count--;
    }
    printf("%d\n", iter);
}
