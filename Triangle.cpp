#include <iostream>
using namespace std;

int main()
{
    int rows;

    cin >> rows;



    for (int i = 1; i <= rows; i++) {
        for (int spaces = i; spaces < rows; spaces++) cout << " ";
        for (int stars = 0; stars < (i*2)-1; stars++) cout << "*";
        cout << "\n";
    }




}
