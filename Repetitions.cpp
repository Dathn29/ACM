#include <bits/stdc++.h>
using namespace std;
int Max(int a,int b){
	if(a>=b)
		return a;
	return b;
}
int main(){
	int dem=1,maxx=0;
	string s;
	cin>>s;
	char a=s[0];
	for(int i=1;i<s.size();i++){
		if(s[i]==a){
			dem++;
		}
		else{
			maxx=Max(maxx,dem);
			dem=1;
			a=s[i];
		}
	}
	cout<<Max(maxx,dem)<<endl;
	return 0;
}