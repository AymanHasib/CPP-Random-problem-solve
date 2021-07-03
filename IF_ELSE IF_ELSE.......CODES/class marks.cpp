#include <iostream>

using namespace std;

int main()
{
    float class_total=30;
    float quiz_marks_total=100;
    float mid_marks_total=100;
    float final_marks_total=100;

    float students_class;
    float students_quiz_marks;
    float students_mid_marks;
    float students_final_marks;

    cout <<"enter the value of calss"<<endl;
    cin >>students_class;

    float CLASS = (10*students_class)/30;
    cout <<"enter the value of quiz"<<endl;
    cin >>students_quiz_marks;
    float quiz_marks =(10*students_quiz_marks)/100;
    cout <<"enter the value of mid marks"<<endl;
    cin >>students_mid_marks;
    float mid_marks =(30*students_mid_marks)/100;
    cout <<"enter the value of final marks"<<endl;
    cin >>students_final_marks;
    float FINAL_marks =(50*students_final_marks)/100;

    float total = CLASS+quiz_marks+ mid_marks+FINAL_marks;
    cout <<total;
    return 0;
}
