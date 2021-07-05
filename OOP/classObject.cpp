#include<iostream>
using namespace std;

class Student{
private:
    int id;

public:
    string name;
    double cgpa;
    void setID(int a){
        id=a;
    }
    int getID(){
        return id;
    }
    void display(){
        cout << "Name: " << name << ", ID: " << id << ", CGPA: " << cgpa << endl;
    }
};

int main(){
    Student s1, s2;

    s1.name="A";
    s1.setID(1);
    s1.cgpa=2.4;

    s2.name="B";
    s2.setID(2);
    s2.cgpa=3.4;

    cout << s1.getID();

    s2.getID();


}
