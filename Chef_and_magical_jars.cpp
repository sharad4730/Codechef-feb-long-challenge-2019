#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector<int>arr(n);
        for(int j=0;j<n;j++)
        {
            cin>>value;
            arr[j]=value;
        }
        long int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[j];
        }
        sum=sum-n+1;
        cout<<sum<<endl;
    }
    return 0;
}
