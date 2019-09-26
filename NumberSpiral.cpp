#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,y,x,dem=0;
int main(){
	cin >>t;
	for(int i=0;i<t;i++){
		cin>>y>>x;
		if(x==y){
			dem=(x-1)*(x-1)+x;
		}
		else{
			if(x>y){
				if(x%2==0){
					dem=(x-1)*(x-1)+y;
				}
				else{
					dem=(x-1)*(x-1)+x*2-y;
				}
			}
			if(x<y){
				if(y%2==0){
					dem=(y-1)*(y-1)+y*2-x;
				}
				else{
					dem=(y-1)*(y-1)+x;
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}