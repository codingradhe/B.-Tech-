#include <iostream>
using namespace std;
class Hospital {
private:
    string hospitalName;
    string address;
public:
    Hospital(string name, string addr) {
    //use of this pointer
        this->hospitalName = name;
        this->address = addr;
    }
    //prevent to change member name--
    string getName1() const {
        return hospitalName;
    }
    // Const return by value
    const string getName2() const {
        return hospitalName;
    }
    // return const reference
    const string& getName3() const {
        return hospitalName;
    }
};
int main() {
    const int x = 10;
    // x++;  -->> gives error 
    Hospital h("SWIMS", "Bilaspur");
    //get copy of name.
    string name1 = h.getName1();
    name1 = "AIIMS";
    const string name2 = h.getName2();
    cout<<name2<<endl;
    // name2 = "GGVHEALTHCARE"; give error 
    string name3 = h.getName3();
    name3 = "newHospital"; 
    cout <<name3 << endl;
    return 0;
}
