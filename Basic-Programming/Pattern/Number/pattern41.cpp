#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,k=1;
    cin>>N;

    for(i=1; i<=N; i++)
    {
            for(j=1; j<=(i*2)-1; j+=2)
                cout<<j;

            for(j=(i-1)*2-1; j>=1; j-=2)
                cout<<j;

        cout<<endl;
    }
    return 0;
}





















