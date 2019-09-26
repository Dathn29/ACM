#include <bits/stdc++.h>
using namespace std;
vector<string> add;
int dem=0;
 
void permutation(string s,int l,int n)
{
    if(l==n){
        add.push_back(s);
    }    
    else
 
    {
        for(int i=l;i<=n;i++){
            swap(s[l],s[i]);
            permutation(s,l+1,n);
            swap(s[l],s[i]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    permutation(s,0,s.size()-1);
    sort(add.begin(),add.end());
    add.erase(unique(add.begin(),add.end()),add.end()); 
    cout<<add.size()<<endl;

    for(int i=0;i<add.size();i++){
        cout<<add[i]<<endl;
    }
    return 0;       
}  