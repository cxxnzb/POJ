#include <stdio.h>
#include<cmath>

int main() {
    int num;
    scanf("%d",&num);
    double *data = new double[num];
    for(int i = 0;i < num;i++){
        scanf("%lf",&data[i]);
    }
    for(int j = 0;j < num - 1;j++) {
        double max1,max2;
        int count1,count2;
        if(data[0] >= data[1]) {
            count1 = 0;
            count2 = 1;
            max1 = data[0];
            max2 = data[1];
        }
        else{
            count1 = 1;
            count2 = 0;
            max1 = data[1];
            max2 = data[0];
        }
        for (int i = 2; i < num; i++) {
            if (data[i] <= max2);
            else if (data[i] > max2 && data[i] <= max1) {
                max2 = data[i];
                count2 = i;
            }
            else{
                count2 = count1;
                count1 = i;
                max2 = max1;
                max1 = data[i];
            }
        }
        data[count1] = 2 * sqrt(max1 * max2);
      //  printf("%d\n",count2);
        data[count2] = 0;
    }
    for(int i = 0;i < num;i++)
        if(data[i] != 0.0)
            printf("%.3f",data[i]);
    return 0;
}