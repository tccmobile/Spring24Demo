#include "Person.hpp"
#include <iostream>
using namespace std;

Person::Person(std::string newName, int newAge){
  name = newName;
  age = newAge;
}

Person::Person(){
  name = "No name";
  age =  42;
}

Person::Person(string newName){
  name = newName;
  age = -1;
}

void Person::setName(string newName){
  name = newName;
}

string Person::getName(){
  return name;
}

void Person::setAge(int newAge){
  if (newAge>0)
    age = newAge;
}

int Person::getAge(){
  return age;
}

void Person::print(){
  if (age != -1){
  cout << name << " is " << age << " years old." << endl;}
  else{
    cout << name << "'s age is unknown." << endl;
  }
}