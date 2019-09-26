#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dem =0,k=1;
ll TrailingZero(ll n,ll k){
	if(pow(5,k)>n)
		return dem;
	dem+=n/pow(5,k);
	TrailingZero(n,k+1);


}
int main() {
	ll n;
	cin>>n;
	cout<<TrailingZero(n,1)<<endl;
	return 0;
}