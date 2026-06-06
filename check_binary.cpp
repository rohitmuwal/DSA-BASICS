#include <iostream>
using namespace std ;
    int main (){
     int n ;
     int count = 0 ;
        cout << "enter n " ;
        cin >> n ;
         while (n > 0) {
        
         if (n & 1 == 1) {
            count = count + 1 ; 
         n = n >> 1 ;
        }
        else {
            count = count + 0 ;
            n = n >> 1 ;
        }
    }
        cout << " number of 1's in binary representation of n is " << count << endl ;

    return 0;
}