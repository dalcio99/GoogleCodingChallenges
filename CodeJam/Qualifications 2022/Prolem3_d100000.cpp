#include <stdio.h>

using namespace std;


int main() {
    int result, empty, MaxDic, Ntests, buff, NumDic;
    MaxDic = 1000006;
    int dices[MaxDic];
    scanf("%d", &Ntests);
    for(int i = 0; i < Ntests; i++) {
        scanf("%d", &NumDic);
        for(int k=0; k<MaxDic;k++) dices[k]=0;
        for(int j = 0; j < NumDic; j++) {
            scanf("%d", &buff);
            dices[buff]++;
        }
        result = NumDic;
        empty = 4;
        for(int k = 4; k < MaxDic; k++) {
            if(dices[k] < empty){
                empty -= dices[k];
            }
            else {
                result = result - (dices[k] - empty);
                empty = 0;
            }
            empty++;
        }
        printf("Case #%d: %d\n", i+1, result);
    }
}
