#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

class Account {
protected:
    int accountNumber;
    float balance;
public:
    Account(int acn, float bal) : accountNumber(acn), balance(bal) { }
    virtual void display() {
        cout << "account number: " << accountNumber
             << " has balance: " << std::setw(7) << balance << " Euro";
    }
    virtual void makeLodgement(float amount) {
        balance = balance + amount;
    }
    virtual void makeWithdrawal(float amount) {
        balance = balance - amount;
    }
    virtual float getBalance() { return balance; }
    virtual string accountType() = 0;
    virtual ~Account() {}
};


class CurrentAccount : public Account {
private:
    float overdraftLimit;
public:
    CurrentAccount(int acn, float bal) : Account(acn, bal), overdraftLimit(0) { }
    void display() override {
        Account::display();
        cout << " - Overdraft limit: " << overdraftLimit << endl;
    }
    void makeWithdrawal(float amount) override {
        if (amount <= (balance + overdraftLimit))
            Account::makeWithdrawal(amount);
    }
    void setOverdraftLimit(float limit) { overdraftLimit = limit; }
    virtual string accountType() override { return "Current Account"; }
};


class LoanAccount : public Account {
private:
    int loanTerm;
public:
    LoanAccount(int acn, float bal, float term) :
            Account(acn, bal), loanTerm(term) { }
    void display() {
        Account::display();
        cout << " - Loan term: " << loanTerm << " months" << endl;
    }
    virtual string accountType() override { return "Loan Account"; }
};
//1
class AccountsLedger{
private:
    Account** accounts;
    int numAccounts;
    float bal_new=0;
    public:
    AccountsLedger(): numAccounts(0),bal_new(0){
        accounts=new Account*[1000];
    }

    bool add(const CurrentAccount &obj){
        if (numAccounts<1000){
            accounts[numAccounts++]=new CurrentAccount(obj);
            return true;
        }
        return false;
    }
    bool add(const LoanAccount & obj) {
        if (numAccounts < 1000) {
            accounts[numAccounts++]= new LoanAccount(obj);
            return true;
        }
        return false;
        }


void print(){
    for (int i = 0; i < numAccounts; i++) {
        accounts[i]->display();
                         }
                 }
float applyCharges(float percentageRate){
    for (int i = 0; i < numAccounts; i++){
    float charge = percentageRate * accounts[i]->getBalance();
        accounts[i]->makeWithdrawal(fabs((charge)));
                }
            cout<<endl;
                }

    ~AccountsLedger() {
        cout<< "The account ledger program is now deallocating memory xD" << endl;
        for (int i = 0; i < numAccounts; i++){
            if (accounts[i] != nullptr) {
                delete accounts[i];
                         }
                 }
    }
};

//2
class Complex {
private:
    double re;
    double im;
public:
    Complex() : re(0), im(0) {};
    Complex(double r, double i) : re(r), im(i) {};
    Complex operator+(const Complex & c) {
        return Complex(re+c.re, im+c.im);
    }
    Complex operator-(const Complex & c) {
        return Complex(re-c.re, im-c.im);
    }
    Complex operator*(const Complex & c) {
        return Complex((re*c.re-(im*c.im)),re*c.im+(c.re*im));
    }
    Complex operator/(const Complex & c) {
        return Complex(((re*c.re)+(im*c.im))/((c.re*c.re)+(c.im*c.im)), ((im*c.re)-(re*c.im))/((c.re*c.re)+(c.im*c.im)));
    }
    friend ostream& operator<<(ostream& os,const Complex & c) {
        os << c.re<<"i"<<","<<c.im<<"j";
        return os;
    }
};
//3
template <class T, int maxSize>
class Set {
private:
    T *elements = new T[maxSize];
    int size;
public:
    Set():size(0) {}

    bool isElement(T inp) {
        for (int i = 0; i < size; i++) {
            if (elements[i] == inp) {
                return false;
            }
                                 }
                 return true;}

    bool add(T inp) {
        if (isElement(inp) && size < maxSize) {
            elements[size] = inp;
            size++;
            return true;
        } else {
            return true;
        }
    }

    int length() {
        return size;
    }

    T get(int i) {
        if (i < size) {
            return elements[i];
        }
    }
};


    int main() {
        system("COLOR 0C");
        Complex c1(1, -2);
        Complex c2(3, -4);
        Complex c3(-3, 2);
        cout << (c1 + c2 - c2 - c1);
        cout << endl;
        cout << ((c1 - c2) / c3 + c1 * c3);
        // ans: 0
        //1.76923 + 7.84615j

        Set<string, 100> s;
        Set<string,100> s2;
        Set<string,100> s3;
        Set<string,100> s4;
        Set<string,100> s5;
        cout << endl;
        s.add("This");
        s.add("test");
        s.add("is");
        s.add("a");
        s.add("test");
        s.add("of");
        s.add("a");
        s.add("set");
        s.add("object");
        s.add("a");
        s.add("set");
        s.add("contains");
        s.add("unique");
        s.add("elements");
        for (int i = 0; i < s.length(); i++)
            cout << s.get(i) << " ";

        cout << endl;
        AccountsLedger ledger;
        ledger.add( LoanAccount(1234, -100000, 20));
        ledger.add( LoanAccount(1235, -200000, 25));
        ledger.add( LoanAccount(1236, -300000, 15));
        ledger.add( CurrentAccount(1237, 3000));
        ledger.add( CurrentAccount(1238, 1000));
        ledger.add( CurrentAccount(1239, 2000));
        ledger.applyCharges(0.01);
        ledger.print();
        return 0;
    }
