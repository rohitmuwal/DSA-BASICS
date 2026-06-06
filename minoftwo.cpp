# include <iostream>
using namespace std;  


 //min of 2 numbers
 int minOfTWO (int a, int b) {
   
    
  if (a < b) {
    return a;
  }
    else {
        return b;
    }
 }
int main() {
  int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "min=" << minOfTWO(a, b)  << endl;
 

    return 0;
}