#include<stdio.h>
int main()
{
    int i,n,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            res=i*i;
            printf("%d^2 = %d\n",i,res);
        }
    }
        return 0;

}
