#include <stdio.h>
#include <ctype.h>
int main(){
    char word;
    printf("enter your character: ");
    scanf("%c",&word);
    if (islower(word)){
        printf("is lower");
    }
    else
    {
        printf("it is in uppercase");
    }
    
    return 0;
}