#include<bits/stdc++.h>
using namespace std;

set<int> st;
unordered_map<int,int>mp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    vector<int> vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<int> ans;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        mp[vec[i]]++;
        
        if(vec[i]>0)
        {
            if(mp[vec[i]]>1)
            {
                cout<<"-1";
                return 0;
            }
            else
            {
                st.insert(vec[i]);
                cnt++;
            }
            
        }
        else
        {
            int x=abs(vec[i]);
            if(st.find(x)==st.end())
            {
                cout<<"-1";
                return 0;
            }
            else
            {
                cnt++;
                st.erase(x);
            }
        }
        
        if(st.size()==0)
        {
            ans.push_back(cnt);
            cnt=0;
            mp.clear();
        }
    }
    
    if(st.size()!=0)
    {
        cout<<"-1";
        return 0;
    }
    
    cout<<ans.size()<<"\n";
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}