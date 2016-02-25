#include<stdio.h>

int main()
{
    int table[9] = {3,1,4,1,5,9,2,6,5};
    int i, j, temp;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(table[j]>table[j+1]){
                temp = table[j];
                table[j] = table[j+1];
                table[j+1] = temp; 
            }
        }
    }
    for(i=0;i<9;i++){
        printf("%d\n", table[i]);
    }
    
    return 0;
}
