#include <iostream>
using namespace std;
// class formation 
class Money {
private:
    double amount;

public:
    // Explicit prevents unwanted implicit conversions
    explicit Money(double value) : amount(value) {
        if (amount < 0) {
            cout << "Warning: Negative amount!" << endl;
        }
    }

    double getAmount() const {
        return amount;
    }

    void deposit(double value) {
        if (value > 0) amount += value;
    }

    void withdraw(double value) {
        if (value > 0 && value <= amount) {
            amount -= value;
        }
    }

    void display() const {
        cout << "Balance: $" << amount << endl;
    }
};

int main() {
    Money wallet(100.0);
     // Explicitly create wallet with 100 rupees
    wallet.display();
    // deposit and display
    wallet.deposit(50.0);   // Add money
    wallet.display();
    // withraw and display  
    wallet.withdraw(30.0);  // Remove money
    wallet.display();

    // Money m = 5000.0;  // ERROR - implicit conversion prevented
    return 0;
}
