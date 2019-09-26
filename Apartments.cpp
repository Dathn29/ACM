#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll n,m,k,i=0,j=0,dem=0;
  cin>>n>>m>>k;
  vector<int> a(n);
  vector<int> b(m);
  for(int i=0;i<n;i++){ 
    cin>>a[i];
  }  
  for(int i=0;i<m;i++){
    cin>>b[i];
  }  
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  while(i<n&&j<m)
    if (a[i]+k<b[j]) 
      i++;
    else if (a[i]-k>b[j]) 
      j++;
    else {
      i++;
      j++;
      dem++;
    }
  cout<<dem<<endl;
}