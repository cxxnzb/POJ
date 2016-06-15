#include<stdio.h>
#include<string.h>
typedef struct NUM{
    char content[8];
    int count;
}NUM;
struct NUM num_list[10000];
//void quicksort(struct NUM *num_list,int begin,int end);
//static void swap(void *x, void *y, size_t l);
int main() {
    int t = 0;
    scanf("%d",&t);
    for(int j = 0;j < t;j++){
        char temp[1002];
        scanf("%s",temp);
        int a = 0;
        for (int i = 0; temp[i] != '\0'; i++) {
            if (temp[i] != '-') {
                if(temp[i] > 'Q')--temp[i];
                if(temp[i] >= 'A' && temp[i] <='Z')
                    temp[a] = (temp[i] - 'A') / 3 + 2 + '0';
                else
                    temp[a] = temp[i];
                ++a;
            }
        }
        temp[7] = '\0';
              int i = 0, flag = 0;
        for (; num_list[i].count != 0;i++) {
            if (strcmp(num_list[i].content, temp) == 0) {
                num_list[i].count++;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            strcpy(num_list[i].content, temp);
            num_list[i].count = 1;
        }
    }
        int l = 0,z = 0;
    for(;num_list[l].count != 0;l++)
        if(z == 0 && num_list[l].count > 1)
            z = 1;
    if(z == 1) {
      // quicksort(num_list,0,l-1);
        //选择排序

        for(int x = 0;x < l;x++){
            int index = x;
            for(int y = x+1;y < l;y++){
                int flag = 0;
                for(int i = 0;num_list[y].content[i] != '\0' && num_list[index].content[i] != '\0';i++)
                    if(num_list[y].content[i] < num_list[index].content[i]){
                        flag = 1;
                        break;
                    }
                if(flag != 0)
                    index = y;
            }
            struct NUM temp = num_list[x];
            num_list[x] = num_list[index];
            num_list[index] = temp;
        }

        for (int d = 0; num_list[d].count != 0; d++) {
            if (num_list[d].count > 1) {
                printf("%3.3s-%s %d\n", num_list[d].content, &num_list[d].content[3],num_list[d].count);
            }
        }
    }
    else{
        printf("No duplicates.\n");
    }
   // printf("!%d %d %d!",start,end,end - start);
    return 0;
}


/*
void quicksort(struct NUM *num_list,int begin,int end)
{
    if(begin<end){
        struct NUM pivot=*(num_list+(begin+end)/2);
        int l=begin,r=end;
        // printf("%d\n",pivot);
        while(l<=r){
            int flag = 0;
            for(int i = 0;(*(num_list+l)).content[i] != '\0' && pivot.content[i] != '\0';i++){
                if((*(num_list+l)).content[i] > pivot.content[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag ==  0){
                l++;
            }else{
                swap(num_list+l,num_list+r,sizeof(struct NUM));
                r--;
            }
        }
        l--;
        r++;
        swap(num_list+l,num_list+(begin+end)/2,sizeof(struct NUM));
        l--;
        quicksort(num_list,begin, l);
        quicksort(num_list,r, end);
    }
}
static void swap(void *x, void *y, size_t l) {
    char *a = (char *)x, *b = (char*)y, c;
    while(l--) {
        c = *a;
        *a++ = *b;
        *b++ = c;
    }
}
*/