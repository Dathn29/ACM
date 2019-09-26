#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll n,dem=0;; 
int main()
{
    long long c=0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++)
    {
            if(a[i]<b[c])
                dem++;
            else if(b[c]<a[i])
                c++;
    }
    cout<<dem<<endl;
}