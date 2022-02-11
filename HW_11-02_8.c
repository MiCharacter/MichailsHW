#include <stdio.h>

int main()
{
    int count;
    int iter=1;
    scanf("%d", &count);
    while(iter*iter*iter<count){
        iter++;
    }
    if(iter*iter*iter==count){
        printf("%d\n", iter);
        printf("Yes");

    }
    else{
        printf("%d\n", iter);
        printf("No");
    }
}
