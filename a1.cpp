#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  int mid;
  cin>>n;
  int l=1;
  int r=n;
  while(l<r){
    mid=(l+r)/2;
    cout<<"? "<<mid;
    cout.flush();
    cin>>a;
    cout<<"? "<<mid+1;
    cout.flush();
    cin>>b;
    if(a<b) r=mid;
    else l=mid+1;
  }
  cout<<"! "<<l<<endl;
  return 0;
}


