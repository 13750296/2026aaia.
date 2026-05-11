//week12-c.cpp
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ans=0;
int n2=n;
while(n>0){
	ans=ans*10+n%10;
	n=n/10;
}
printf("%d+%d=%d\n",n2,ans,n2+ans);
}
