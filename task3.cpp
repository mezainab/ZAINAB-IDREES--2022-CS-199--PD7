#include <iostream>
using namespace std;

void upperShape(int rows);
void lowerShape(int rows);
main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    upperShape(rows);
    lowerShape(rows);
}
void upperShape(int rows)
{
    for (int i = 1; i <= rows; i = i + 1)
    {
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
void lowerShape(int rows)
{
    for (int i = 1; i <= rows; i = i + 1)
    {
        for(int j = 1; j <= i; j = j + 1)
        {
            cout << " ";
        }
        for(int j = rows; j >= i; j = j - 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}