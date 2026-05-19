
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
        cout << "Sharia Account" << endl;
        cout << "Balance = "
            << balance << endl;
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

class PremiumAccount : public BankAccount {
public:
    PremiumAccount(int b) : BankAccount(b) {}

    void cutAdmin() {

        if (balance > 10000000) {
            cout << "Free admin fee" << endl;
        }
        else {
            balance -= 50000;

            cout << "Balance = "
                << balance << endl;
        }
    }
};

int main() {

    BankAccount* acc;

    ShariaAccount sharia(5000000);
    ConventionalAccount conv(5000000);
    PremiumAccount premium(9000000);

    acc = &sharia;
    acc->cutAdmin();

    acc = &conv;
    acc->cutAdmin();

    acc = &premium;
    acc->cutAdmin();




    return 0;
}