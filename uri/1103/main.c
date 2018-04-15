#include <stdio.h>
#include <string.h>

int main(){
    int H1, M1, H2, M2;
    int diffH, diffM, diff;
    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2)){
        if( !H1 && !M1  && !H2 && !M2){
            break;
        }
        if(H2 > H1){
            diffH = H2 - H1;
            diffM = M2 - M1;
        } else if(H2 == H1){
            if(M2 > M1){
                diffH = 0;
                diffM = M2 - M1;
            } else {
                diffH = 24;
                diffM = M2 - M1;
            }
        } else {
            if(H2 == 0){
                diffH = 24-H1;
                diffM = M2 - M1;
            } else {
                diffH = 24-(H1 - H2);
                diffM = M2 - M1;
            }
        }
        diff = diffH*60+diffM;
        printf("%d\n",diff);
    }
}