#include <iostream>
#include <string.h>
using namespace std;

main()
{

    int length,choice;
    cout << "Enter the length of the student "<<endl;
    cin >>length;
    int marksb [length],markse [length],marksm [length],markss [length],marksr [length],roll [length];
    string name [length];

    for (int i = 0; i<length; i++)
    {
        cout << "Name : ";
        cin >>name [i];
        cout << "Roll : ";
        cin >>roll [i];
        cout << "Bangla : ";
        cin >>marksb [i];
        cout << "English : ";
        cin >>markse [i];
        cout << "Math : ";
        cin >>marksm [i];
        cout << "Science : ";
        cin >>markss [i];
        cout << "Religion : ";
        cin >>marksr [i];
    }
    cout << "Enter 1 for search by name"<<endl;
    cout << "Enter 2 for search by roll"<<endl;
    cin >>choice;
   if (choice == 1)
    {
        string name007;
        cout << "Enter the name : ";
        cin >>name007;
        for (int i = 0; i<length; i++)
        {
            if (name007==name [i])
            {
                cout << "Name : "<<name [i]<<endl;
                cout << "Roll : "<<roll [i]<<endl;
                cout << "Bangla : "<<marksb [i]<<endl;
                cout << "English : "<<markse [i]<<endl;
                cout << "Math : "<<marksm [i]<<endl;
                cout << "Science : "<<markss [i]<<endl;
                cout << "Religion : "<<marksr [i]<<endl;
            }
        }
    }
    if (choice == 2)
    {
        int roll007;
        cout << "Enter the roll : ";
        cin >>roll007;
        for (int i = 0; i<length; i++)
        {
            if (roll007==roll [i])
            {
                cout << "Name : "<<name [i]<<endl;
                cout << "Roll : "<<roll [i]<<endl;
                cout << "Bangla : "<<marksb [i]<<endl;
                cout << "English : "<<markse [i]<<endl;
                cout << "Math : "<<marksm [i]<<endl;
                cout << "Science : "<<markss [i]<<endl;
                cout << "Religion : "<<marksr [i]<<endl;
            }
        }
    }

    return 0;

}



