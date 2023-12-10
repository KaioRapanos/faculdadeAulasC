#include <stdlib.h>

int main(){
    
    int i = 5;
    i++;
    printf("%i\n",i);

    int j, N = 3, res;
    for(j = 1; j <= 10; j++){
        res = N * j;
        printf("%d x %d = %d\n", j, N, res);
    }
}