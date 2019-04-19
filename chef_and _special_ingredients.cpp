#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        int freq[26]={0};
        cin>>n;
        for(int j=0;j<n;j++)
        {
            char str[200];
            scanf("%s",str);
            int p=strlen(str);
            for(int k=0;k<p;k++)
            {
                if(freq[str[k]-'a']==j)
                    freq[str[k]-'a']++;
            }
            for(int k=0;k<26;k++)
                if(freq[k]==n)
                    count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
