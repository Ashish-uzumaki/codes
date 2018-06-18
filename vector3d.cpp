#include<bits/stdc++.h>
using namespace std;
class vector3d{
private :
  float _x,_y,_z;
public:
  vector3d(float a,float b,float c);
  ~vector3d(){
  };
  vector3d(const vector3d&v1);
  void set_x(float a){
    _x=a;
  }
  void set_y(float b){
    _y=b;
  }
  void set_z(float c){
    _z=c;
  }
public:
  float get_x(){
    return _x;
  }
  float get_y(){
    return _y;
  }
  float get_z(){
    return _z;
  }
public:
  vector3d add(vector3d);
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
    _x=a;
    _y=b;
    _z=c;
}
vector3d::vector3d(const vector3d& v1){
    _x=v1._x;
    _y=v1._y;
    _z=v1._z;
}
vector3d vector3d::add(vector3d v){
  vector3d v2;
  vector3d& c=v2;
  c.set_x(_x+v.get_x());
  c.set_y(_y+v.get_y());
  c.set_z(_z+v.get_z());
  return c;
}
vector3d vector3d::subtract(vector3d v){
  vector3d v2;
  vector3d& c=v2;
  c.set_x(_x-v.get_x());
  c.set_y(_y-v.get_y());
  c.set_z(_z-v.get_z());
  return c;
}
vector3d& vector3d::cross(vector3d v2){
vector3d v3;
vector3d& c=v3;
c.set_x(_y*v2._z-_z*v2._y);
c.set_y(-_x*v2._z+_z*v2._x);
c.set_z(_x*v2._y-_y*v2._x);
return c;
}
vector3d& vector3d::scalar_product(float a){
  vector3d v1;
  vector3d& c=v1;
  c.set_x(a*_x);
  c.set_y(a*_y);
  c.set_z(a*_z);
  return c;
}
vector3d& vector3d::scalar_product(int a){
  vector3d v1;
  vector3d& c=v1;
  c.set_x(a*_x);
  c.set_y(a*_y);
  c.set_z(a*_z);
  return c;
}
float vector3d::dot(vector3d v1){
  float l;
  l=v1.get_x()*_x+v1.get_y()*_y+v1.get_z()*_z;
  return l;
}
float vector3d:: norm(){
  float l=sqrt(pow(_x,2)+pow(_y,2)+pow(_z,2));
  return l;
}
ostream&operator<<(ostream &out,const vector3d&v)
{
    out << v._x<<" "<<v._y<<" "<<v._z<<endl;
    return out;
}
istream&operator>> (istream&in,  vector3d&v)
{
    in >> v._x>>v._y>>v._z;
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
  cout<<ans;
  return 0;
}
