
#include <iostream>
#define C(t,x) cout<<t<<x<<endl ;
#define C2(t) cout<<t<<endl ;


 struct Entity {
     int xEntity;
     static int yEntity;
};
 int Entity::yEntity;

 int main() {
     Entity::yEntity = 5;//ok
     //Entity::xEntity = 5;// not ok
 }