#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n,x,i,j,dem=0;
	cin>>n>>x;
	vector<ll> p(n);
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p.begin(),p.end());
	i=0;
	j=n-1;
	while(i<=j){
		if(p[i]+p[j]>x)
			j--;
		else{
			i++;
			j--;
		}
		dem++;
	}
	cout<<dem<<endl;
}