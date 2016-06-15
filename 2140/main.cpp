#include <iostream>

using namespace std;
int main() {
    int a;
    cin>> a;
    int count = 0;
    for(int i = 1;i <= a;i++){
        int sum = 0;
        for(int j = 1;j <= i;j++)sum+=j;
        if(sum > a)break;
        if((a - sum) % i == 0)count++;
    }
    cout << count;
    return 0;
}
