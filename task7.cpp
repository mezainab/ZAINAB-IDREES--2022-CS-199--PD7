#include <iostream>
using namespace std;

main()
{
    int integer;
    cout << "Enter no. Of Integers: ";
    cin >> integer;

    int number;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    for (int i = 1; i <= integer; i++)
    {

        cout << "Enter your Number: ";
        cin >> number;

        if (number % 2 == 0)
        {
            count1 = count1 + 1;
        }
        if (number % 3 == 0)
        {
            count2 = count2 + 1;
        }
        if (number % 4 == 0)
        {
            count3 = count3 + 1;
        }
    }
    float percentage1 = (count1 / integer) * 100;
    float percentage2 = (count2 / integer) * 100;
    float percentage3 = (count3 / integer) * 100;
    cout << "Percentage for numbers divisible by 2: " << percentage1 << "%" << endl;
    cout << "Percentage for numbers divisible by 3: " << percentage2 << "%" << endl;
    cout << "Percentage for numbers divisible by 4: " << percentage3 << "%" << endl;
}