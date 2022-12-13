#include <stdio.h>
int main()
{
    printf("A 的值是 %\n", 'A');
    printf("B 的值是 %\n", 'B');
    printf("C 的值是 %\n", 'C');

    for(int c='A';c<='Z';c++){
        printf("%c 的值是%d\n",c,c);
    }
}
