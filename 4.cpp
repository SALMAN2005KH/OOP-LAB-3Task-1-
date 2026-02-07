#include <iostream>
#include <string>
using namespace std;

class CricketPlayer 
{
    private :
    string name;
    int jerseyNo;
    
    double totalRuns;
    double no_matches;

    public :
 double battingAvg;
    CricketPlayer(string N, int jNo, double totR, double n_match) {
        name = N;
        jerseyNo = jNo;
        totalRuns = totR;
        no_matches = n_match;
    }
    double calculateAvg(double totalRuns, double no_matches) {
        battingAvg = totalRuns/no_matches;
        return battingAvg;
    }
    void displayStats(){
        cout << "Cricketer's Name : "<< name << endl;
        cout << "Jersey No. : " << jerseyNo << endl;
        cout << "Total Runs : " << totalRuns << endl;
        cout << "Total Matches : " << no_matches << endl;
        cout << "Batting Average : " << battingAvg << endl;
        cout << "This batting average is more consistent than Karachi's weather!" << endl;
    }
    double addplayMatch(double runsScored) {
        totalRuns += runsScored;
        cout << "Total Runs = " << totalRuns << endl; 
        battingAvg = totalRuns / (no_matches + 1);
        return battingAvg;
    }

};
int main () {
    string name;
    int jNo;
    double match;
    double runs;
    double runsScored;
    
    cout << "Enter Name of Cricketer : ";
    getline(cin, name);
    cout << "Enter Jersey No. : ";
    cin >> jNo;
    cout << "Enter Total matches played by the Batsman : ";
    cin >> match;
    cout << "Enter the Total Runs of Batsman : ";
    cin >> runs;

    CricketPlayer p1(name, jNo, runs , match );
    p1.calculateAvg(runs, match);
    p1.displayStats();

    cout << "Enter the score of " << name << " in Today's Match : ";
    cin >> runsScored;
    cout << "\n Playing Status of " << name << " after 1 match added :- \n"<< endl;
    p1.addplayMatch(runsScored);
    p1.displayStats();

    
}