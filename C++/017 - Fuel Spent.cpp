#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int SpentTime, AverageSpeed;
    
    cin >> SpentTime >> AverageSpeed;
    
    cout << fixed << setprecision(3) << SpentTime * AverageSpeed / 12.0 << endl;
 
    return 0;
}