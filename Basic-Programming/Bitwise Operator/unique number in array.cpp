#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[]={1,2,3,4,1,2,3};
    int result,i,n=7;

    result=ara[0];

    for(i=0;i<n;i++)
    {
        result=result^ara[i];
        cout<<result<<endl;N
    }
    printf("Result: %d\n",result);
    return 0;
}
