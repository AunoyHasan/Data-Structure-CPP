#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

    ///we can not use private members
    ///but if we want to use public members
    ///we have to use public
  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
