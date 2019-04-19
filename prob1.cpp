#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int llu;
int main()
{
    int t;
    llu n,k,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a>>b>>k;
        llu x,y,z,m;
        x=n/a;
        y=n/b;
        z=(a*b)/__gcd(a,b);
        z=n/z;
        z=z<<1;
        m=x+y-z;
        if(m>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
    return 0;
}
