#include <iostream>

using namespace std;

int main() {
    double a;
    cin >> a;
    while(a != 0){
        double test = 0.5,i = 3;
        while(test < a){
            test +=1/i;
            i++;
        }
        cout << i - 2 << " card(s)" << endl;
        cin >> a;
    }
    return 0;
}