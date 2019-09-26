#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef pair<lli,lli> ii;
#define F first
#define S second
int main(){
	lli n,x,dem=0;
	cin>>n>>x;
	vector<ii> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].F;
		a[i].S=i+1;
	}
	sort(a.begin(),a.end());

	lli i=0,j=n-1,k=n/2;
	while(1){
		if(n<3){
			break;
		}
		if(a[i].F+a[j].F+a[k].F>x){
			if(a[i].F+a[j].F+a[k-1].F<x){
				j--;
				if(j==k){
					j++;
					i++;
					if(i==k)
						break;
				}
			}
			else{
				k--;
				if(k==i){
					j--;
					k++;
					if(j==k)
						break;
				}
			}
		}
		else if(a[i].F+a[j].F+a[k].F<x){
			if(a[i].F+a[j].F+a[k+1].F>x){
				i++;
				if(i==k){
					j--;
					i--;
					if(j==k)
						break;
				}
			}
			else{
				k++;
				if(k==j){
					i++;
					k--;
					if(i==k)
						break;
				}
			}

		}
		if(a[i].F+a[j].F+a[k].F==x&&i!=k&&k!=j){
			cout<<a[i].S<<" "<<a[k].S<<" "<<a[j].S<<endl;
			dem=1;
			break;
		}
	}
	if(dem==0)
		cout<<"IMPOSSIBLE\n";
	return 0;
}