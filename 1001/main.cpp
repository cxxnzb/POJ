#include <iostream>
using namespace std;
int main(){
    char R[6],ans[150] = "1";
    int n;
    cin >> R >> n;

    if(n == 0)
        cout<< "0" <<endl;
    else{
        while(n){
            if(n % 2 == 1){
                n--;
            }
            n = n >> 1;
        }
        cout << ans << endl;
    }
}


