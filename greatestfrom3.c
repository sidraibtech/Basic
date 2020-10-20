#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z,ans;
    printf("ENTER THREE NUMBERS Please");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
         ans=x;
    }
    else if (y>x&&y>z)
    {
         ans=y;
    }
    else
    {
         ans=z;
    }
     printf("%d is the greatest number",ans);
}
