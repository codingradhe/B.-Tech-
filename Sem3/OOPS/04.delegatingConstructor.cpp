#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int roll;
    double cgpa;
    // original parametric constructor 
    Student(string n, int a, int r, double c)
        : name(n), age(a), roll(r), cgpa(c){ }
     // delegating constructor when user have only name and age of students
    Student(string n, int a)
        : Student(n, a, 0, 0.0) { }
     // delegating constructor when user have only name  of students
    Student(string n)
        : Student(n, 18, 0, 0.0){ }
};

int main(){
    // create students s1 
    Student s1("radheshym", 20, 10, 8.7);
    cout<<"std name age roll cgpa \n";
    // display student s1informaton 
    cout<<s1.name<<" "<<s1.age<<" " <<s1.roll<<" "<<s1.cgpa<<endl;
    // delegating student s1 information in s2 which are not  provided by user
    Student s2("radheshyam", 20);
    // display s2
    cout<<s2.name<<" "<<s2.age<<" " <<s2.roll<<" "<<s2.cgpa<<endl;
    //
    // delegating student s1 information in s3 which are not  provided by user
    
    Student s3("radheshyam");
    // display s3
    cout<<s3.name<<" "<<s3.age<<" " <<s3.roll<<" "<<s3.cgpa<<endl;
    return 0;
}
