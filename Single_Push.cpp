#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    
    vector<int> v1(n);
    vector<int> v2(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    
    int count=0;
    bool ans=true;
    
    for(int i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            count++;
            if(count==2)
            {
                ans=false;
                break;
            }
            
            int diff=v1[i]-v2[i];
            
            if(diff>=0)
            {
                ans=false;
                break;
            }
            int j;
            for(j=i+1;i<n;j++)
            {
                if(v1[j]-v2[j]!=diff)
                {
                    break;
                }
            }
            
            i=j-1;
            
        }
    }
    
    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<"\n";
    }
    
    
   
    return 0;
}