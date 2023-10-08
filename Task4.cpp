#include<iostream>
using namespace std;

int projectTimeCalculation(float hours, float days, float noOfWorkers);

main()
{
        float hours, days, noOfWorkers;
        cout << "Enter the needed hours: ";
        cin >> hours;
        cout << "Enter the days that the firm has: ";
        cin >> days;
        cout << "Enter the number of all workers: ";
        cin >> noOfWorkers;
 projectTimeCalculation(hours, days, noOfWorkers);
}
int projectTimeCalculation(float hours, float days, float noOfWorkers)
{
 float finalHours= noOfWorkers * (0.9*10*days);
          if(hours<finalHours)
	{
      int finalHours1=finalHours-hours;
      cout<< "Yes!"<<finalHours1<<" hours left.";
      }
      if(hours>finalHours)
	{
      int finalHours2=hours-finalHours;
       cout<< "Not enough time! "<<finalHours2<<" hours needed.";
      }
}
       

