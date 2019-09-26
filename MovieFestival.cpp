#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<ll,ll> pll;
int main()
{
    ll n,c=0,dem=0;
    cin>>n;
    vector<pll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++)
    {
            if(a[i].second>=c){
                dem++;
                c=a[i].first;
            }
    }
    cout<<dem<<endl;
    return 0;
}