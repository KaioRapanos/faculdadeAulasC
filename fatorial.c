#include <stdio.h>
 
int fat(int n){
    if(n == 1)
        return 1;
    else
        return n * fat(n-1);
}
 
int main()
{
    int num, res;
    printf ("Informe o número:\n");
    scanf ("%d", &num);
    res = fat(num);
    printf ("O fatorial é: %d\n", res);
    return (0);
}