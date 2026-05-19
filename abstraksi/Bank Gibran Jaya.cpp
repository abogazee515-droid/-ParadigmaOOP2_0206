
#include <iostream>
using namespace std;

class BankAccount {

protected:
    int balance;

public:

    BankAccount(int b) {
        balance = b;
    }

    virtual void cutAdmin() = 0;
};

class ShariaAccount : public BankAccount {
public:
    ShariaAccount(int b) : BankAccount(b) {}

    void cutAdmin() {
        cout << "No admin fee" << endl;
    }
};

class ConventionalAccount : public BankAccount {
public:
    ConventionalAccount(int b) : BankAccount(b) {}

    void cutAdmin() {
        balance -= 15000;

        cout << "Balance = "
            << balance << endl;
    }
};

int main() {

    ShariaAccount sharia(5000000);
    sharia.cutAdmin();

    return 0;
}