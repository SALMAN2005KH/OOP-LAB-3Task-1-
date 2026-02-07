#include <iostream>
#include <string>
using namespace std;

class Day 
{
    private : 
    string day[7];
    int currentDay;

    public :
    Day () {
        day[0] = "Monday";
        day[1] = "Tuesday";
        day[2] = "Wednesday";
        day[3] = "Thursday";
        day[4] = "Friday";
        day[5] = "Saturday";
        day[6] = "Sunday";

         currentDay = 0;
    }

    Day (int d) : Day() {
        if (d > 7) {
            currentDay = d % 7;
        }
        else {
            currentDay = d;
        }
    }
    string getCurrentDay() {
        return day[currentDay];
  }
  string getNextDay() {
        return day[currentDay+1];
  }
  string getPreviousDay() {
        return day[currentDay-1];
  }
  string getNthDayFromToday(int N) {
    int futureDay = (currentDay + N) % 7;
    return day[futureDay];
  }
};

int main () {
    int Cday;
    cout << "Enter the Day number (1->Monday, 2->Tuesday, 3->Wednesday, 4->Thursday, 5->Friday, 6->Saturday, 7->Sunday) : ";
    cin >>  Cday;

    Cday -= 1;
    
    Day d1(Cday);

    cout << "_____DAYS DETAILS____" << endl;
    cout << "TODAY IS " << d1.getCurrentDay() << endl;
    cout << "TOMORROW IS " << d1.getNextDay() << endl;
    cout << "PREVIOUS DAY IS " << d1.getPreviousDay() << endl; 
    int No;
    cout << "Enter the Number for Future Day : ";
    cin >> No;
    cout << "AFTER " << No << " DAYS IT WILL BE " << d1.getNthDayFromToday(No) << endl; 

    return 0;
}