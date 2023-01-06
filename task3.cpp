#include <iostream>
using namespace std;

float taxCalculator(char type, float price);


main()
{
    char type;
    float price;


    cout << "Enter the type of the vehicle: ";
    cin >> type;
    cout << "Enter the price of the vehicle: ";
    cin >> price;

    float finalPrice = taxCalculator(type, price);

    cout << "The final price of a vehicle of type " << type << " after adding the tax is " << finalPrice << endl;
}

float taxCalculator(char type, float price)
{
    float taxRate;
    if (type == 'M')
    {
        taxRate = 6;
    }
    if (type == 'E')
    {
        taxRate = 8;
    }
    if (type == 'S')
    {
        taxRate = 10;
    }
    if (type == 'V')
    {
        taxRate = 12;
    }
    if (type == 'T')
    {
        taxRate = 15;
    }
    float taxPrice = price * taxRate/100;
    float finalPrice = price + taxPrice;

    return finalPrice;
}