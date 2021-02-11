#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){

	char EmpName[50];
	double Salary, TotalSold;
	
	cin >> EmpName;
	cin  >> Salary >> TotalSold;

	cout << fixed << setprecision(2) << "TOTAL = R$ " << Salary + (TotalSold * 0.15) << endl;
    
	return 0;
}