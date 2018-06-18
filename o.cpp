#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<pair<float,float>>v;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
  lli t;
  cin>>t;
  for(lli k=0;k<t;k++){
    lli n;
    cin>>n;
    for(lli i=0;i<n;i++){
      float w,c;
      cin>>w>>c;
      v.push_back(make_pair(w,c));
    }
    sort(v.begin(),v.end());

  }
  return 0;
}
