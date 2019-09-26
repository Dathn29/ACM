#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll n,maxx=0,dem=0,dem1=0;
  cin>>n;
  vector<ll> k(n+1);
  map<ll,ll> a;
  for (int i=1;i<=n;i++){
    cin>>k[i];
  }
  for (int i=1;i<=n;i++){
    if(a[k[i]]==0){
      dem++;
      a[k[i]]=i;
    }
    else{
      dem1=i-a[k[i]];
      if(dem+1>dem1){
        dem=dem1;
      }
      else
        dem++;
    }  
	}
  return 0;
}
