#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int n,i,count;
    while(cin>>n)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
