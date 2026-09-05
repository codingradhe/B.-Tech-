#include<iostream>
#include<vector>
using namespace std;
 class volume {
  private:
   vector<double> dimention;

   public:
   volume(float l,float b, float h){
    dimention.push_back(l);
    dimention.push_back(b);
    dimention.push_back(h);
   }
   float capacity(){
    return dimention[0]*dimention[1]*dimention[2];
   }
 };
   int main(){
    float l,b,h;
    cin>>l>>b>>h;
    volume box(l,b,h);
    cout<<"volume:"<<box.capacity()<<endl;
    return 0;
  }
