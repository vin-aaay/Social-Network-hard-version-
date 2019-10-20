//copyright sumitraj387
#include<bits/stdc++.h>
using namespace std;
#define pb push_back//_____standard_template____
#define come_on ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); //___________program booster_________
#define pop pop_back
#define str string
#define ll long long int
#define endl "\n"
#define vec vector
#define m_p make_pair
#define mod 1000000007
main()
{
    ll n,i,j,k;
    str s1,s2,s3,s4,s5,s6,s7;
    ll arrwww[101];
    for(i=0;i<10;i++) arrwww[i]=0;
    cin>>n>>k;
    ll arr[n];
    map<ll,ll>mp;
    list<ll>q;
    //Running For Loop
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
            
        }
 
    }

    int m;
    cin>>m;
    int array[1000]={0};
    for(int i=0;i<m;i++)
    {
        if(array[i]==0)
        {
            cout<<"h";
    }
=======
    if(arr[0]==6)
    {
        cout<<"try something else ";
        return 0;
    }
    if(arr[0]==7)
    {
        cout<<"nice";
    }
    
    
    cout<<q.size()<<"\n";
    for(auto it=q.begin();it!=q.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}
