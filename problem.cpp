#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int k=0;k<t;k++){
    int n,p;
    cin>>n>>p;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int tough=0;
    int easy=0;
    for(int i=0;i<n;i++){
      if(p%10==0){
        if(a[i]<=p/10){
          tough++;
        }
        else if(a[i]>=p/2){
          easy++;
        }
      }
      else{
        if(a[i]<(p/10)+1){
          tough++;
        }
        else if(a[i]>=p/2){
          easy++;
        }
      }
    }
    if(tough==2&&easy==1){
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }

  }
}
