#include<iostream>
using namespace std;
int main ()
{
    struct employee {
        int age ;
        float sal;
    };
    struct employee person [3];
    for (int i=0;i<3;i++){
        cout << "PERSON: "<<i+1<<endl;
        cout << "AGE: ";
        cin >> person[i].age;
        cout << "SALARY: ";
        cin >> person[i].sal;
    }
     for (int i=0;i<3;i++){
        cout << "PERSON: "<<i+1<<endl;
        cout << "AGE: "<<person[i].age<<endl;
        cout << "SALARY: "<<person[i].sal<<endl;
    }


    return 0;
}
