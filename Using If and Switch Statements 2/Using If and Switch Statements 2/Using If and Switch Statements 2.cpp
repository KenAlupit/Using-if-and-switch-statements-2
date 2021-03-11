

#include <iostream>
using namespace std;
int main()
{
    double distance_cost;
    int distance;
    cout << "Distance:";
    cin >> distance;
    if (distance >= 0 && distance <= 100) {
        distance_cost = 5.00;
    }
        else if (distance >= 101 && distance <= 500) {
            distance_cost = 8.00;
        }
            else if (distance >= 501 && distance <= 999) {
                distance_cost = 10.00;
            }
                else if (distance >= 1000) {
                    distance_cost = 12.00;
                }
    cout << "Distance cost:" <<distance_cost;
}