
#include <stdio.h>
int sum(int a,int b);///先宣告declare

int main()
{///再用之前,要先宣告declare 或 定義define
    int ans=sum(2,3);///使用呼叫
        printf("ans: %d\n",ans);
}
int sum(int a,int b)///定義 define
{
    return a+b;
}///回傳 回復人家
