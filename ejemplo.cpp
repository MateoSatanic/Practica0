#include <iostream>

using namespace std;

int main()
{
    string list[7] = {"A","B","C","D","E","F","G"};
    int c,f;

    for (f=0;f<=6;f++) {
        for (c=0;c<=12;c++) {

            if(c<=f){
                cout << list[c];

            }

            else {
                if(c>=12-f){
                cout << list[12-c];
                }

               else {
                cout << " ";
                }

            }

        }
        cout << endl;

    }

    return 0;
}
