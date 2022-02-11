#include <stdio.h>

int main()
{
    int count;
    int iter=1;
    scanf("%d", &count);
    while(iter*iter<count){
        iter++;
    }
    printf("%d\n", iter);
}
