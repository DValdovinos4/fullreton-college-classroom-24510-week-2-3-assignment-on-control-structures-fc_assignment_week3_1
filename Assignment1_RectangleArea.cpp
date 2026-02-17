#include <iostream>

using namespace std;

int main() {
    int width, height, width2, height2;

    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    cout << "Enter the height of the first rectangle: ";
    cin >> height; 

    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    cout << "Enter the height of the second rectangle: "; 
    cin >> height2;

    int area = width * height;

    int area2 = width2 * height2;

    cout << "The area of the first rectangle is: " << area << endl;

    cout << "The area of the second rectangle is: " << area2 << endl;

    if (area > area2) {
        cout << "The first rectangle has the greater area." << endl;
    } else if (area < area2) {
        cout << "The second rectangle has the greater area." << endl;
    } else if (area == area2) {
        cout << "The areas are the same." << endl;
    }

    
return 0;

}
