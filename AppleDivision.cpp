#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli n,k,sum,dem1,dem,m=100000000000,a[100];
vector<lli> s;
void In() 
{
    lli y;
    dem1=0;
    for (int i=1;i<k+1;i++)
    {
      dem1+=a[i]; 
    }
    y=sum-dem1;
    if(y>dem1)
      swap(y,dem1);
    m=min(dem1-y,m);
}
void demso(int dem)  
{
    for(int i=1;i<=n-k+dem;i++) 
    {
        if(s[i-1]<=a[dem-1])
          continue;
        a[dem]=s[i-1];
        if(dem==k)
            In();
        else
          demso(dem+1);
            
    }
}
int main() 
{
  cin>>n;
  s.resize(n);
  for(lli i=0;i<n;i++){
    cin>>s[i];
    sum+=s[i];
  }
  sort(s.begin(),s.end());

  m=sum;
  for(int i=1;i<n;i++){
    k=i;
    demso(1);
  }
  cout<<m<<endl;
  return 0;  
}
