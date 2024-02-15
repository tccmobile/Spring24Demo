#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using namespace std;

class Person {
private:
    string name ;
    int age;
public:
    Person(string name, int age);
    Person();
    Person(string name);
    void setName(string);
    void setAge(int);
    string getName();
    int getAge();
    void print();
};

#endif