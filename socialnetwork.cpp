//copyright sumitraj387
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back//_____standard_template____
#define come_on ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); //___________program booster_________
#define pop pop_back
#define str string
#define endl "\n"
#define vec vector
#define m_p make_pair
#define mod 1000000007
main()
{
    int n,i,j,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>mp;
    list<int>q;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=0;
        if(mp[arr[i]]==0)
        {
            if(q.size()<k)
            {
                q.push_front(arr[i]);
                mp[arr[i]]=1;
            }
            else if(q.size()==k)
            {
                q.push_front(arr[i]);
                mp[q.back()]=0;
                mp[arr[i]]=1;
                q.pop_back();
 
            }
        }
 
    }
    cout<<q.size()<<endl;
    for(auto it=q.begin();it!=q.end();it++)
    {
        cout<<*it<<" ";
    }
}
