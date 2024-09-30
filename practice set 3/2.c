#include <stdio.h>

int main()
{
    int physics, chemistry, maths, total;
    float percent;
    printf("Enter your physics's marks : ");
    scanf("%d", &physics);
    printf("Enter your maths's marks : ");
    scanf("%d", &maths);
    printf("Enter your chemistry's marks : ");
    scanf("%d", &chemistry);

    total = physics + chemistry + maths;
    percent = (total / 300.0) * 100.0;
    if (physics >= 33)
    {
        printf("you are passed in physics\n");
    }
    else
    {
        printf("you are failed in physics\n");
    }
    if (chemistry >= 33)
    {
        printf("you are passed in chemistry\n");
    }
    else
    {
        printf("you are failed in chemistry\n");
    }
    if (maths >= 33)
    {
        printf("you are passed in maths\n");
    }
    else
    {
        printf("you are failed in maths\n");
    }

    if (percent >= 40.0 && physics >= 33 && maths >= 33 && chemistry >= 33)
    {
        printf("you are passed");
    }
    else
    {
        printf("you are failed");
    }

    return 0;
}