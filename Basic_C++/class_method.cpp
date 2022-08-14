#include <iostream>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
    void myName();
};

void MyClass::myName() {
  cout << "Mahmudul Hasan Aunoy";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  cout<<endl;
  myObj.myName();  // Call the method
  return 0;
}
