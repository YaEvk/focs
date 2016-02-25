#include<stdio.h>
#include<string.h>

int main()
{
    char *table[6] = {"base","ball","mound","bat","glove","batter"};
    int i,j;
    const char *p = table[0];
    const char *temp = table[0];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(strcmp(p, (p+1)) >= 0){
                temp = p;
                p  = (p+1);
                (p+1) = temp;
            }
/*            if(strcmp(table[j],table[j+1])>0){
                temp = table[j];
                table[j] = table[j+1];
                table[j+1] = temp; 
            }*/
        }
    }
    for(i=0;i<6;i++){
        printf("%s\n", table[i]);
    }
    
    return 0;
}
