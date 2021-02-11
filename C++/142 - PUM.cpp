#include <iostream>
 
using namespace std;
 
int main() {

    int N, i, j;
	
	cin >> N;
    
    for(i = 0; i < N * 4; i++){
        for(j = 0; j < 4; j++){
            if(j == 3)
                cout << "PUM" << endl;
			else{
				i++;
				cout << i << " ";
			}
        }
    }
 
    return 0;
}