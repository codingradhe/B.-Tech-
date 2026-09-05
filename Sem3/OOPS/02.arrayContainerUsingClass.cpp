#include <iostream>
#include <array>
using namespace std;

class Student {
public:
    string name;
    array<int, 5> marks;(){(){

    void input() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < marks.size(); i++) {
            cin >> marks[i];
        }
    }

    void display() {
        int sum = 0;

        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: ";

        for (int i = 0; i < marks.size(); i++) {
            cout << marks[i] << " ";
            sum += marks[i];
        }

        float average = (float)sum / marks.size();

        cout << "\nAverage Marks (CPI): " << average << endl;
    }
};

int main() {
    Student s;  

    s.input();
    s.display();

    return 0;
}
