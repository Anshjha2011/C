#include <stdio.h>

int main(){
    char word;
    printf("enter your character: ");
    scanf("%c",&word);
    if ((int)("%d",word)>90){
        printf("is lower");
    }
    else
    {
        printf("it is in uppercase");
    }
    
    return 0;
}