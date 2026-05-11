//week12-5b.cpp (SOIT106_ADVANCE_006)
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ans=0;
for(int i=1;i<n;i++){
ans+=i*(i+1);
}
printf("%d\n",ans);
}
