#include <iostream>

using namespace std;
int main() {
    int num;
    cin >> num;
    for(int i = 1;i <= num;i++){
        int unused,a;
        cin >> unused >>a;
        int count = 0;
        for(int i = 2;i <= a;i++){
            int sum = 0;
            sum = (i+1)*i/2;
            if(sum > a)break;
            if((a - sum) % i == 0)count++;
        }
        cout << i<<" "<<count<<endl;
    }
    return 0;
}