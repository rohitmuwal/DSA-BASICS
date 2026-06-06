#include <iostream>
using namespace std;

int main() {
  int target;
cout << "enter target " ;
cin >> target ;

int arr[7] = {1, 4,6,8,9,7,3};
int sz = 7 ;
 for ( int i =0; i< sz; i++){

    if (arr[i] == target) {
        cout << "target found at index " << i << endl ;
        break ;
    }

if (i == sz - 1) {
    cout << -1 << endl ;
} 
 }
    return 0;
}