#include<stdio.h>
#include<math.h>
int main()
{
    int phy,che,math,total,PM;
    printf("Enter the marks of the physics chemistry and math's\n");
    scanf("%d%d%d",&phy,&che,&math);
    total=(phy+che+math);
    PM=phy+math;
    if(phy>40 && che>50 && math>60 && (PM>150||total>200))
    {
        printf("You are eligible for the course\n");
        
    }
    else
     printf("Not eligible\n");
    return 0;
}
