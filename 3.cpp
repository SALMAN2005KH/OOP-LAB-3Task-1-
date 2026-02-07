#include <iostream>
#include <string>
using namespace std;

class SmartDevice 
{
    private :
    string deviceName;
    string type;
    bool status;

    public :
    
    SmartDevice (string D_name, string typ, bool stat) {
        deviceName = D_name;
        type = typ;
        status = stat;
    }

    void displayInfo() {
        cout << "DEVICE NAME IS " << deviceName << endl;
        cout << "TYPE OF DEVICE IS " << type << endl;
        if (status == 0) {
            cout << "DEVICE IS OFF. PLEASE RESTART THE PROGRAM." << endl;
        }
        else {
            cout << "DEVICE IS ON NOW." << endl;
        }
    }

    ~SmartDevice () {
        cout << "I've served you well, from the first switch-on to this final moment.Thank you for every command, every task, every day you trusted me.My circuits may rest now, but our moments stay saved in memory.Goodbye, human. This device signs off with gratitude." << endl;
    }

    
};

int main () {
    string d_name;
    string typ;
    bool stat;
    cout << "Enter the Device Name : ";
    getline (cin, d_name);
    cout << "Enter the Type of Device : ";
    getline (cin, typ);
    cout << "Enter 0 for OFF and 1 for ON : ";
    cin >> stat;

    SmartDevice SD1(d_name, typ, stat);
    SD1.displayInfo();

return 0;
}