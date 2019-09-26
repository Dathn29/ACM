#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll> add; 
int main(){
	int n;
	ll x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		add[x]++;
	}
	cout<<add.size()<<endl;
	return 0;
}