#include <stdio.h>
#include <string.h>
int main()
{
            char A[7] = {'P','i','e','t','r','o','\0'};
            char B[8] = {'M','a','r','t','i','n','s','\0'};
            char C[20];
            strcpy(C, A);
            strcat(C, B);
            printf("Texto: \"%s\".\n", C);
            return (0);

}