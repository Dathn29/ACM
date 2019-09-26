#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,maxx,dem;
	cin>>n;
	vector<ll> x(n);
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	maxx=x[0];
	dem=x[0];
	for(int i=1;i<n;i++){
		dem=max(x[i],dem+x[i]);
		maxx=max(maxx,dem);
	}
	cout<<maxx<<endl;
	return 0;
}