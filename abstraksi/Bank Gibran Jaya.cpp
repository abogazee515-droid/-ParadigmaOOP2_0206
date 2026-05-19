
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

int main() {

    return 0;
}