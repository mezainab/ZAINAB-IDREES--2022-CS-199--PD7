#include <iostream>
using namespace std;

void sequence(int number);
main()
{
    int number, digit;
    cout << "Enter the number to be Ampliflied: ";
    cin >> number;

    sequence(number);
}
void sequence(int number)
{
    for (int count = 1; count <= number; count = count + 1)
    {
        int digit = count;

        if (digit % 4 == 0)
        {
            digit = count * 10;
        }
        cout << digit << ",";
    }
}