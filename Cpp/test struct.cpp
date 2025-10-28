#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
struct Student
{
    string name;
    int age;
    double gpa;
    long long lol;
};
Student s;
s.name = "ahmed";
s.age = 18;
s.gpa = 3.33;
s.lol = 0;
cout<<s.name<<endl;
cout<<"Address of name: "<<&s.name<<endl;
cout<<s.age<<endl;
cout<<"Address of age: "<<&s.age<<endl;
cout<<s.gpa<<endl;
cout<<"Address of gpa: "<<&s.gpa<<endl;
cout<<s.lol<<endl;
cout<<"Address of lol: "<<&s.lol<<endl;


return 0;
}