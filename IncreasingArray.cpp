#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long int a[n+1],dem=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    long long int x,y;
    if(i==0){
      x=a[i];
      continue;
    }
    y=a[i];
    if(y<x){
      dem+=x-y;
    }
    else
      x=y;
  }
  cout<<dem<<endl;
}
