#include <iostream>
using namespace std;
// class formation 
class student{
  public: 
  int id;
  int age;
  string name;
  // student default constructor 
  student( ){ }
  
  // student parametric constructor defining
  explicit student(int s_id, int s_age, string s_name)
    : id{s_id}, age{s_age}, name{s_name} { }
    // student copy constructor definig 
  student(const student& s) : id{s.id}, age{s.age}, name{s.name}{
      cout<<"copy constructor is called\n";
  } 
  ~student(){
    cout<<"student default destructor is called\n";
  }
};

int main() {
  student s1{4,25,"radheshyam"};
  // display s1 information
  cout<<s1.id<<" "<<s1.name<<" "<<s1.age<<endl;
  // copy all thing in student s2 from student s1
  student s2(s1);
  // change necessary things in student s2
  s2.name = " Pinkey";
  s2.id = s2.id+1;
  // display s2 information
  cout<<s2.id<<" "<<s2.name<<" "<<s2.age<<endl;
  return 0;
}
