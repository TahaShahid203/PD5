#include <iostream>
using namespace std;

float pyramidVolume(float, float, float, string);

main()
{
    float length, width, height;
    string unit;
    float volume;
    cout << "Enter length of the pyramid's base in meters: ";
    cin >> length;
    cout << "Enter the width of the pyramid's base in meters: ";
    cin >> width;
    cout << "Enter the height of the pyramid in meters: ";
    cin >> height;

    cout << "Enter the unit in which you want your answer: " << endl;
    cout << "options are: millimeters, centimeters, meters, kilometers" << endl;
    cin >> unit;

    volume = pyramidVolume(length, width, height, unit);

    cout << "The volume of the pyramid in cubic "<< unit << " is " << volume << endl;
}

float pyramidVolume(float length, float width, float height, string unit)
{
    float areaOfBase = length*width;
    float volume = height*areaOfBase/3;
    if (unit == "millimeters")
    {
        volume = volume*1000000000;
    }
    if (unit == "centimeters")
    {
        volume = volume*10000;
    }
    if (unit == "kilometers")
    {
        volume = volume/1000000000;
    }
    return volume;
}