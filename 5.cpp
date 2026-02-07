#include <iostream>
#include <string>
using namespace std;

class FootballPlayer 
{

    private :
    string name;
    string position;
    int goalCount;

    public :
    FootballPlayer () {
        name = "UnknownPlayer";
        position = "Beanchwarmer";
        goalCount = 0;
    }
    FootballPlayer (string N, string P, int gc) {
        name = N;
        position = P;
        goalCount = gc;
    }
    FootballPlayer (const FootballPlayer &FP2) {
        name = FP2.name;
        position = FP2.position;
        goalCount = FP2.goalCount;
    }
    FootballPlayer (string name) {
        this->name = name;
        position = "Midfielder";
        goalCount = 10;
   }
   void displayStats(){
        cout << "Footballer's Name : "<< name << endl;
        cout << "Position : " << position << endl;
        cout << "Total Goals : " << goalCount << endl;
   }
};

int main () {
    FootballPlayer FB1;
    cout << "___PLAYER 1 DETAILS___\n" << endl;
    FB1.displayStats();

    string name;
    string position;
    int goal;

    cout << "\n\nEnter Name of Player 2 : ";
    getline(cin, name);
    cout << "Enter Position of Player 2 : ";
    cin >> position;
    cout << "Enter Total Goals of Player 2 : ";
    cin >> goal;

    FootballPlayer FB2(name, position, goal);
    cout << "\n___PLAYER 2 DETAILS___\n" << endl;
    FB2.displayStats();

    FootballPlayer FB3 = FB2;
    cout << "\n___PLAYER 3 DETAILS___\n" << endl;
    FB3.displayStats();
 
    cout << "\n___PLAYER 4 DETAILS___\n" << endl;
    FootballPlayer FB4("Lionel Messi");
    FB4.displayStats();
}