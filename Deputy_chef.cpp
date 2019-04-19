#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value1,value2;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int j=0;j<n;j++)
        {
            cin>>value1;
            v1[j]=value1;
        }
        for(int j=0;j<n;j++)
        {
            cin>>value1;
            v2[j]=value1;
        }
        int def=0,max=0;
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                if(v1[n-1]+v1[1]<v2[j])
                    def=v2[j];
            }
            else if(j==n-1)
            {
                if(v1[j-1]+v1[0]<v2[j])
                    def=v2[j];
            }
            else
            {
                if(v1[j-1]+v1[j+1]<v2[j])
                    def=v2[j];
            }
            if(def>max)
                max=def;
        }
        if(max!=0)
            cout<<max<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
            
