#include <iostream>
using namespace std;

main ()
{
int countOfCargo, tonOfCargo = 0, price1, price2, price3, tonOfMB = 0, tonOfTruck = 0, tonOfTrain = 0;
float averagePrice = 0, percentageByMB = 0, percentageByTruck = 0 , percentageByTrain = 0, totalTon = 0;
cout << "Enter count of cargo: ";
cin >> countOfCargo;


for(int i = 1; i <= countOfCargo ; i++)
{
    cout << "Enter tonnage of Current cargo: ";
    cin >> tonOfCargo;

    totalTon = totalTon + tonOfCargo;

{
    if(tonOfCargo <= 3)
    {
        tonOfMB= tonOfMB + tonOfCargo;
        price1 = tonOfMB * 200;
       
    }
    if(tonOfCargo > 3 && tonOfCargo <= 11)
    {
        tonOfTruck = tonOfTruck + tonOfCargo;
         price2 = tonOfTruck * 175;
        
        
    }
    if(tonOfCargo > 11)
    {
        tonOfTrain = tonOfTrain + tonOfCargo;
        price3 = tonOfTrain * 120;
    
    }
    averagePrice  = (price1 + price2 + price3) / totalTon;
}
}
percentageByMB = (tonOfMB / totalTon) * 100;
percentageByTruck = (tonOfTruck / totalTon) * 100;
percentageByTrain = (tonOfTrain / totalTon) * 100;
cout << "Average: " << averagePrice << endl;
cout << "Percentage by Minibus: " << percentageByMB << "%" << endl;
cout << "Percentage by Truck: " << percentageByTruck << "%" << endl;
cout << "Percentage by Train: " << percentageByTrain << "%" << endl;
}