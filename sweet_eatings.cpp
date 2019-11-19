#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    cin>>n>>m;
    
    vector<int> vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    long long int curSum=0;
    vector<long long int> ans(n,0);
    
    for(int i=0;i<n;i++)
    {
        curSum+=vec[i];
        ans[i]=curSum;
        
        if(i>=m)
        {
            ans[i]=ans[i]+ans[i-m];
        }
        
        //cout<<ans[i]<<" ";
    }
    //cout<<curSum;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}