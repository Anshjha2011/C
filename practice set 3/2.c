#include <stdio.h>

int main(){
    int physics,chemistry,maths,total,percent;
    printf("Enter your physics's marks : ");
    scanf("%d",&physics);
    printf("Enter your maths's marks : ");
    scanf("%d",&maths);
    printf("Enter your chemistry's marks : ");
    scanf("%d",&chemistry);
    
    total = physics+chemistry+maths;
    percent = (total/300)*100;
    if (percent>=40 && physics>=33 && maths>=33 && chemistry>=33){
        printf("you are passed");
    }
    else
    {
        printf("you are failed");
    }
    
return 0;

}