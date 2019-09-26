#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,sum=0;
	cin>>n;
	vector<ll> p(n);
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p.begin(),p.end());
	for(int i=0;i<n;i++){
		if(i<n/2)
			sum+=p[n/2]-p[i];
		else
			sum+=p[i]-p[n/2];
	}
	cout<<sum<<endl;
	return 0;
}