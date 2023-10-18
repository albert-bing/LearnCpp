//
// Created by liuxiaobing03 on 2023/10/17.
//

#include "Test_class05.h"
#include "iostream"

using namespace std;

class Person{
private:
    string name;
    string age;
    string gender;
public:
    void setName(string name){
        this->name= name;
    }
    string getName(){
        return name;
    }
};

int main(){

    Person person;
    person.setName("liuxiaobing03");
    cout<<"person.getName()="<<person.getName()<<endl;

}