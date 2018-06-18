#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define N 100100
map<lli,vector<lli>>mapp;
bool visited[N];
int color[N];
vector<lli>v1;
vector<lli>v2;
bool bipartite(lli src){
  color[src]=1;
  queue <lli> q;
   q.push(src);
   // v1.push_back(src);
   while(!q.empty()){
     lli u=q.front();
     q.pop();
     for(lli v=0;v<mapp[u].size();v++){
       if(color[mapp[u][v]]==-1){
         color[mapp[u][v]]=1-color[u];
         // v2.push_back(mapp[u][v]);
         q.push(mapp[u][v]);
       }

     else if(color[mapp[u][v]]==color[u]){
       return false;
     }
    }
   }
   return true;
}
int main(){
  lli n,m;
  lli x,y;
  cin>>n>>m;
  for(lli i=0;i<n;i++){
    color[i+1]=-1;
  }
  for(lli i=0;i<m;i++){
    cin>>x>>y;
    mapp[x].push_back(y);
    mapp[y].push_back(x);
  }
  if(bipartite(x)){
    for(lli i=1;i<=n;i++){
      if(color[i]==1){
        v1.push_back(i);
      }
      else if(color[i]==0){
        v2.push_back(i);
      }
    }
    cout<<v1.size()<<endl;
    for(lli i=0;i<v1.size();i++){
      cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(lli i=0;i<v2.size();i++){
      cout<<v2[i]<<" ";
    }
  }
  else{
    cout<<-1;
  }
}
