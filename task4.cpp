#include <iostream>
#include <cmath>
using namespace std;


int workerHours(int, int, int);

main()
{
    int requiredHours, availableDays, availableWorkers;
    cout << "Enter the hours needed for the project: ";
    cin >> requiredHours;
    cout << "Enter the days that the firm has: ";
    cin >> availableDays;
    cout << "Enter the number of workers: ";
    cin >> availableWorkers;

    int workTime = workerHours(requiredHours, availableDays, availableWorkers);

    if (workTime < requiredHours)
    {
        int hoursNeeded = requiredHours - workTime;
        cout << "Not enough time! " << hoursNeeded << " hours needed." << endl;
    }
    if (workTime >= requiredHours)
    {
        int freeHours = workTime - requiredHours;
        cout << "Yes! " << freeHours << " hours left." << endl;
    }
}

int workerHours(int requiredHours, int availableDays, int availableWorkers)
{
    float daysAfterTraining = 0.9 * availableDays;
    float hoursOfWork = daysAfterTraining * 10;
    hoursOfWork = floor(hoursOfWork);
    int workDone = hoursOfWork * availableWorkers;
    return workDone;
}