#include<stdio.h>
#include<string.h>

int main()
{
    char *table[6] = {"base","ball","mound","bat","glove","batter"};
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            if(strcmp(table[j],table[j+1])>0){
                char* temp = table[j];
                table[j] = table[j+1];
                table[j+1] = temp; 
            }
        }
    }
    for(i=0;i<6;i++){
        printf("%s\n", table[i]);
        printf("%s\n", typeof(table));
    }
    
    return 0;
}
