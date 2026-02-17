#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   int units;
   double packageprice=199;
   
    cout << "Enter number of units sold: ";
    cin >> units;

    double Total = units * packageprice;
    cout << fixed << setprecision(2);
    
    if (units <= 0)
    {
        cout << "Invalid input. Please enter a different amount of units" << endl;
    }
    else if (units >=1 && units <=9)
    {
        cout << "The total cost is: $" << Total << endl;
    }
    else if (units >=10 && units <=19)
    {
        cout << "The total cost is: $" << Total -( Total * 0.20) << endl;
    }
    else if (units >=20 && units <=49)
    {
        cout << "The total cost is: $" << Total -( Total * 0.30) << endl;
    }
    else if (units >=50 && units <=99)
    {
        cout << "The total cost is: $" << Total -( Total * 0.40) << endl;
    }
    else if (units >=100)
    {
        cout << "The total cost is: $" << Total -( Total * 0.50) << endl;
    }
    

    return 0;
}
