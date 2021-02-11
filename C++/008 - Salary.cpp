#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

	int id, hours_month;

	float amount_per_hour;

	cin  >> id	>> hours_month >> amount_per_hour;

	cout << "NUMBER = " << id << endl;
	cout << fixed << setprecision(2) << "SALARY = U$ " << hours_month * amount_per_hour << endl;
    return 0;
}