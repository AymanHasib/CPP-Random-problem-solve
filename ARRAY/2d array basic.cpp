#include <iostream>
using namespace std;
main()
{
    int matrix [4][5] = {{1,2,3,4,5},{2,3,1,5,6},{9,8,5,2,3},{7,5,3,2,8}};

    /*  1 2 3 4 5
        2 3 1 5 6
        9 8 5 2 3
        7 5 3 2 8 */

        for (int i = 0; i<4; i++){
            for (int j = 0; j<5; j++){
                cout << matrix [i] [j]<< " ";
            }
            cout << endl;
        }

    return 0;

}



