#include <stdio.h>

int main(){
    int marks ;
    printf("Enter you marks : ");
    scanf("%d",&marks);
    if (marks >100){
        printf("enter marks");
    }
    else if (marks>=90){
        printf("your grade is A");
    }
    else if (marks>=80)
    {
        printf("your grade is B");
    }
    else if (marks>=70){
        printf("your grade is C");
    }
    else if (marks>=60)
    {
        printf("your grade is D");
    }
    else if (marks>=50)
    {
        printf("your grade is E");
    }
    else
    {
        printf("YOU ARE FAIL");
    }
    
    


    return 0;
}