#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
    double planAprice=39.99;
    double planBprice=59.99;
    double planCprice=79.99;

    double planAdata=2.0;
    double planBdata=8.0;
    double costPerGB=8.0;

    string name;
    char plan;
    double dataUsed;
    double totalbill  = 0;

    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter plan: ";
    cin >> plan;

    switch(plan)
    {
        case 'A' :
        case 'a' :
            cout << "Enter data used in GB: ";
            cin >> dataUsed;
            if (dataUsed <= planAdata) {
                totalbill = planAprice;
            }
            else {
                totalbill = planAprice + ((dataUsed - planAdata) * costPerGB);
            }
            cout << fixed << setprecision(2);
            cout << " Total bill is: $" << totalbill << endl;
            if( totalbill > planBprice){
                cout << " You would save $" << totalbill - planBprice << " by switching to Plan B." << endl;
            }
             if( totalbill > planCprice){
                cout << " You would save $" << totalbill - planCprice << " by switching to Plan C." << endl;
            }
            break;
        case 'B' :
        case 'b' :
            cout << " Enter data used in GB: ";
            cin >> dataUsed;
            if (dataUsed <= planBdata) {
                totalbill = planBprice;
            }
            else {
                totalbill = planBprice + ((dataUsed - planBdata) * costPerGB);
            }
            cout << fixed << setprecision(2);
            cout << " Total bill is: $" << totalbill << endl;
            if( totalbill > planCprice){
                cout << " You would save $" << totalbill - planCprice << " by switching to Plan C." << endl;
            }
            break;
        case 'C' :
        case 'c' :
            cout << " Enter data used in GB: ";
            cin >> dataUsed;
            totalbill = planCprice;
            cout << fixed << setprecision(2);
            cout << " Total bill is: $" << totalbill << endl;
            break;
        default:
            cout<<"Error: Invalid plan selection." <<endl;
    }
        return 0;
    }
/* create the code yourself */
/* Use Switch Statement */
