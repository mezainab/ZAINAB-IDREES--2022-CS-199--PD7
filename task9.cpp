#include <iostream>
using namespace std;

void shape(int rows);

main ()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    shape(rows);
    
}
void shape(int rows)
{
    
    for (int i = 1; i <= rows; i = i + 1)
    {
        for(int j = 1; j <= i ; j = j + 1)
        {
            cout << "*";
        }
        for(int j = rows; j >= i; j = j - 1)
        {
            cout << " ";
        }
        for(int j = rows; j >= i; j = j - 1)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

}
