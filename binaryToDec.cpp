#include <iostream>
using namespace std ;

int binaryToDec(int binaryNum) {
  int ans = 0;
  int power = 1;

  while(binaryNum>0){
  int rem = binaryNum % 10;
  binaryNum = binaryNum/10;
  ans += (rem*power) ;
  power = power*2 ;
  }
  return ans ;
}

    int main () {
        int n ;
        cout << "entre binaryNum : " ;
        cin >> n;

        cout <<binaryToDec(n) << endl;

    return 0;
    }



