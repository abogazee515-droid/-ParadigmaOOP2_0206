
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

int main() {

    return 0;
}