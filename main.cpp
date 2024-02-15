#include <iostream>
using namespace std;
#include "Person.hpp"

int main() {
  Person one;
  Person beta("Bob",27);
  Person temp("Sue");
  //one.setName("Jane");
  //one.setAge(20);  

  one.print();
  beta.print();
  temp.print();
  

  
  
}