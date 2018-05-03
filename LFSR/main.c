#include <stdio.h>
#include<stdlib.h>
void main(){
    
    int len;
    printf("please input the Length of the shift register:");
    scanf("%d",&len);
    int r[len];
    int numberxor;
    int cycles;
    int temp;
    printf("number:");
    scanf("%d",&numberxor);
    int xor[numberxor];
    printf("please input the Tap positions:\n");
    for(int i=0;i<numberxor;i++){
        scanf("%d",&xor[i]);
    }
    printf("please input the Seed value:\n");
    for(int i=len-1;i>=0;i--){
        scanf("%d",&r[i]);
    }
    printf("please input the Number of clock cycles:\n");
    scanf("%d",&cycles);
    for(int i=0;i<cycles;i++){
        temp=r[xor[numberxor-1]];
        printf("%d ",r[len-1]);
        for(int xxoorr=numberxor-2;xxoorr>=0;xxoorr--)
        {
            temp=temp^r[xor[xxoorr]];
        }
        for(int t=len;t>0;t--){
            r[t]=r[t-1];
        }
        r[0]=temp;
    }
    printf("\n");
}



