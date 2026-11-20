#include <iostream>
#include <string>
using namespace std;

// Concept 03: Constructors
class Student {
private:
    string name;
    int id;

public:
    Student() {                       // default constructor
        name = "Unknown";
        id = 0;
    }
    Student(string n, int i) {        // parameterized constructor
        name = n;
        id = i;
    }
    void display() {
        cout << name << " " << id << endl;
    }
};

// Concept 02: Access Modifiers
class BankAccount {
private:
    double balance;
public:
    void setBalance(double amount) { balance = amount; }
    double getBalance() { return balance; }
};

int main() {
    cout << "--- Concept 03: Constructors ---" << endl;
    Student s1;                         // default constructor
    Student s2("Rahim", 210601);        // parameterized
    Student a("Rahim", 210601);
    Student b("Karim", 210602);
    Student c("Fatema", 210603);
    s1.display();
    s2.display();
    a.display();
    b.display();
    c.display();

    cout << "--- Concept 02: Getter/Setter ---" << endl;
    BankAccount acc;
    // acc.balance = 500;   // ERROR: 'double BankAccount::balance' is private within this context
    acc.setBalance(500);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
