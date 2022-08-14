#include <iostream>
using namespace std;

class Student{
public:
    int id;
    string name;
    string department;
};

int main(){

    Student s1;
    s1.id = 1;
    s1.name = "Aunoy";
    s1.department="CSE";

    cout<<"For student 1"<<endl;
    cout<<"Id :"<<s1.id<<endl;
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Department :"<<s1.department<<endl;


    Student s2;
    s2.id = 2;
    s2.name = "Rifat";
    s2.department="CSE";

    cout<<"\nFor student 2"<<endl;
    cout<<"Id :"<<s2.id<<endl;
    cout<<"Name :"<<s2.name<<endl;
    cout<<"Department :"<<s2.department<<endl;

    s2.department = "EEE";
    cout<<"Department :"<<s2.department<<endl;

    return 0;
}
