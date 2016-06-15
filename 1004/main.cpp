#include <iostream>

using namespace std;

int main() {
   double money,sum;
   for(int i = 1;i <= 12;i++){
        cin >> money;
        sum += money;
   }
    cout << "$" << sum / 12;
    return 0;
}