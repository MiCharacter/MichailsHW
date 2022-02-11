#include <stdio.h>

int main()
{
    int count;
    int iter;
    int least;
    int switc = 1;
    scanf("%d", &count);
    while(count!=0){

        scanf("%d", &iter);
        if(switc == 1){
            switc = 0;
            least = iter;
        }
        else{
            if(least>iter){
                least = iter;
            }
        }
        count--;
    }
    printf("%d", least);
    return 0;
}

