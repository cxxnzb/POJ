#include <iostream>

using namespace std;

int main() {
   int num;
   cin >> num;
   for(int i = 0;i < num;i++){
      double x,y;
      cin >> x >> y;
      cout << "Property " << i + 1 << ": This property will begin eroding in year " <<int ((x*x + y*y) * 3.1415926 / 100) + 1 <<"."<<endl;
   }
   cout << "END OF OUTPUT.";
   return 0;
}