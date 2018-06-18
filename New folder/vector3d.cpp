#include<bits/stdc++.h>
using namespace std;
class vector3d{
  private :
  float x,y,z;
public:
  vector3d(float a,float b,float c);
  ~vector3d(){
  };
  vector3d(const vector3d&v1);
  void setX(float a){
    x=a;
  }
  void setY(float b){
    y=b;
  }
  void setZ(float c){
    z=c;
  }
public:
  float getX(){
    return x;
  }
  float getY(){
    return y;
  }
  float getZ(){
    return z;
  }
public:
  vector3d  add(vector3d);
  vector3d subtract(vector3d v);
  vector3d cross(vector3d v);
  vector3d scalar_product(int a);
  vector3d scalar_product(float a);
  float dot(vector3d v);
  float norm();
  friend ostream&operator<<(ostream &out,const vector3d&v);
  friend istream&operator>>(istream &in,vector3d&v);
}*v1;
vector3d::vector3d(float a=0,float b=0,float c=0){
    x=a;
    y=b;
    z=c;
}
vector3d::vector3d(const vector3d& v1){
    x=v1.x;
    y=v1.y;
    z=v1.z;
}
vector3d vector3d::add(vector3d v){
  vector3d v2;
  v2.setX(x+v.getX());
  v2.setY(y+v.getY());
  v2.setZ(z+v.getZ());
  return v2;
}
vector3d vector3d::subtract(vector3d v){
  vector3d v2;
  v2.setX(x-v.getX());
  v2.setY(y-v.getY());
  v2.setZ(z-v.getZ());
  return v2;
}
vector3d vector3d::cross(vector3d v2){
vector3d v3;
v3.setX(y*v2.z-z*v2.y);
v3.setY(-x*v2.z+z*v2.x);
v3.setZ(x*v2.y-y*v2.x);
return v3;
}
vector3d vector3d::scalar_product(float a){
  vector3d v1;
  v1.setX(a*x);
  v1.setY(a*y);
  v1.setZ(a*z);
  return v1;
}
vector3d vector3d::scalar_product(int a){
  vector3d v1;
  v1.setX(a*x);
  v1.setY(a*y);
  v1.setZ(a*z);
  return v1;
}
float vector3d::dot(vector3d v1){
  float l;
  l=v1.getX()*x+v1.getY()*y+v1.getZ()*z;
  return l;
}
float vector3d:: norm(){
  float l=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
  return l;
}
ostream&operator<<(ostream &out,const vector3d&v)
{
    out << v.x<<" "<<v.y<<" "<<v.z<<endl;
    return out;
}
istream&operator>> (istream&in,  vector3d&v)
{
    in >> v.x>>v.y>>v.z;
    return in;
}
int main(){
  vector3d v,w;
  cin>>v;
  cin>>w;
  float i,f;
  cin>>f>>i;
  vector3d r;

  r=v.add(w);
  cout<<r;
  r=v.subtract(w);
  cout<<r;
  r=v.scalar_product(f);
  cout<<r;
  r=w.scalar_product(i);
  cout<<r;
  float ans=v.dot(w);
  cout<<ans<<endl;
  r=v.cross(w);
  cout<<r;
  ans=v.norm();
  cout<<ans<<endl;
  ans=w.norm();
  cout<<ans<<endl;
}
