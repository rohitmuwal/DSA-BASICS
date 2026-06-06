#include <iostream>
using namespace std;

int decToBinary(int decNum) {
     int answer = 0;
    int power = 1;
    
    while (decNum>0) {
        int rem = decNum % 2;
        decNum = decNum / 2;
       
         answer += (rem * power);
        power = power * 10;
        
    }
    return answer ;
}

int main() {
    int n;
    cout << "enter decNum : ";
    cin >> n;
    cout << decToBinary(n) << endl;

    return 0 ;
}



