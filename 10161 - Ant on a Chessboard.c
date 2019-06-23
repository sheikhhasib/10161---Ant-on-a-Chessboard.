#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y;
    while(scanf("%d",&n)==1)
    {
        if(n == 0) break;
        int root = ceil(sqrt(n));
        int c = root*root-root+1;
        x=y=root;
        if(root%2==0){
            if(n>c) y = y-n+c;
            else
                x=x-c+n;
        }
        else{
            if(n>c) x = x-n+c;
            else
                y = y-c+n;
        }
        printf("%d %d\n",x,y);
    }
    return  0;
}
