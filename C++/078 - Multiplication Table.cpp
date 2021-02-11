#include <iostream>
 
using namespace std;
 
int main() {
 
    int N = 0, i;
    
    while(N > 1000 || N < 2)
        cin >> N;
        
    for(i = 1; i <= 10; i++)
        cout << i << " x " << N << " = " << N * i << endl;
        
    return 0;
}