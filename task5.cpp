#include <iostream>
using namespace std;

void triangle(int length);
main()
{
    int length;

    cout << "Enter required length of triangle: ";
    cin >> length;

    triangle(length);
}
void triangle(int length)
{
    int sum=0;
    for (int x = 1; x <= length; x = x + 1)
    {
        sum = sum + x;

    }
cout<<sum;
}