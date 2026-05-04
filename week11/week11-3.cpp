///week11-3.cpp 老師最喜歡的selection選擇排序
#include <stdio.h>
int main()
{
        int a[10]={9,8,7,6,5,4,3,2,1,0};///一開始的陣列
    for (int k=0;k<10;k++)printf("%d",a[k]);///印出來看看
    printf("\n");///這次改成kkk比較好看
    for(int i=0;i<10;i++){///左手i
        for(int j=i+1;j<10;j++){///右手j
            if(a[i]>a[j]){///如果左手i vs.右手j
                int temp=a[i];///大小不對 就交換
                a[i]=a[j];
                a[j]=temp;
            }
    }

    for (int k=0;k<10;k++)printf("%d",a[k]);///印出來看看
    printf("\n");///這次改成kkk比較好看

    }
}
