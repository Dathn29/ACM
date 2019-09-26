#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,x,dem=0;
	cin>>n>>x;
	vector<pair<ll,ll>> sum;
	vector<ll> vec(n);
	vector<ll> cpy(n);
	for(ll i=0;i<n;i++){
		cin>>vec[i];
		cpy[i]=vec[i];
	}
	sort(vec.begin(),vec.end());
	for(ll i=0;i<n;i++){
		sum.push_back(make_pair(vec[i],cpy[i]));
	}
	ll i=0,j=n-1;
	while(i<j){
		if(sum[i].first+sum[j].first>x)
			j--;
		else if(sum[i].first+sum[j].first<x)
			i++;
		else{
			ll h=0,k=0;
			for(ll a=0;a<n;a++){
				if(sum[i].first==sum[a].second&&dem==0){
					h=a;
					dem++;
				}
				else if(sum[j].first==sum[a].second)
					k=a;
			}
			if(h>k)
				cout<<k+1<<" "<<h+1<<endl;
			else
				cout<<h+1<<" "<<k+1<<endl;
			dem++;
			break;
		}
	}
	if(dem==0)
		cout<<"IMPOSSIBLE\n";
	return 0;
}