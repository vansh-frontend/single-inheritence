// single level inhertince in c++

#include <iostream>
using namespace std;

class Account
{
public:
    float salary = 80000; // default salary
};

class Bonus : public Account
{ // class Bonus inherits class Account
public:
    float bonus = 5000; // default bonus
};

int main()
{
    Bonus b1; // creating an object for class Bonus to access its properties

    cout << "Your Account Balance:" << endl
         << endl;
    cout << "Your salary is: " << b1.salary << endl;    // accessing salary property (default 80000)
    cout << "You get a bonus of: " << b1.bonus << endl; // accessing bonus property (default 5000)

    return 0;
}
