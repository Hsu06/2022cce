#include <stdio.h>
int main()
{

        FILE * fout = fopen("file.txt","w");
        fprintf(fout,"Hello World\n");
        printf("檔案就出現了喔,請檢察檔案總管\n");
}
