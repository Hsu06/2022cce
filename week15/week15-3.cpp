#include <stdio.h>
int main()
{
    printf("A ���ȬO %\n", 'A');
    printf("B ���ȬO %\n", 'B');
    printf("C ���ȬO %\n", 'C');

    for(int c='A';c<='Z';c++){
        printf("%c ���ȬO%d\n",c,c);
    }
}
