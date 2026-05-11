//week12-5c.cpp (SOIT106_ADVANCE_007)
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int n1=n/1000;
int n2=n/100%10;
int n3=n/10%10;
int n4=n%10;
if(n1==n4 && n2==n3)printf("YES\n");
else printf("NO\n");
}
