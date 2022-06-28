#include <iostream>

using namespace std;

class Employe{
    protected:
        int salary;
};

class Programmer: public Employe{
    public:
        int bonus;

        void setSalary( int isiSalary) {
            this->salary = isiSalary;
        }

        int getSalary() {
            return this->salary;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    Programmer myObjek;
    myObjek.setSalary(1000000);
    myObjek.bonus =200000;
    cout << "Salary: " << myObjek.getSalary() << endl;
    cout << "Bonus: " << myObjek.bonus << endl;
    return 0;
}
