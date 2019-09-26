#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull dem=1;
ull mu(ull a,ull b){
	ull c=1000000007;
	if(b==0)
		return dem;
	if(b%2!=0)
		dem=dem*a%c;
	mu(a*a%c,b/2);
}

int main() {
	ull n,dem=0;
	cin >> n;
	cout<<mu(2,n)<<endl;
}