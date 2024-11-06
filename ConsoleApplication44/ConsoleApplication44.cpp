#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point() {
        x = 0;
        y = 0;
    }

    friend ostream& operator<<(ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
  
    friend istream& operator>>(istream& is, Point& point) {
        cout << "Enter X: ";
        is >> point.x;
        cout << "Enter Y: ";
        is >> point.y;
        return is;
    }
};

int main() {
    Point p;
    cin >> p;
    cout << "Point: " << p << endl;
}
