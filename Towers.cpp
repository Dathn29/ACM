#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll n,k;
  cin>>n;
  multiset<ll> a;
  for(int i=0;i<n;i++){
    cin>>k;
    auto dem=a.upper_bound(k);
    if(dem==a.end())
      a.insert(k);
    else{
      a.erase(dem);
      a.insert(k);
    }    
  }
  cout<<a.size()<<endl;
  return 0;
}