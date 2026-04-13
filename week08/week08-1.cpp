//week08-1好玩的程式設計 黑白棋
//File-Preference字型放很大
size(620,620);
background(#B49735);//背景色
for(int i=0;i<10;i++){//左手i高度y
  for(int j=0;j<10;j++){//右手j寬度x
    int x=10+j*60,y=10+i*60;//小心i j
    fill(#B49735);//填充色彩
    strokeWeight(2);//線條的粗細
    rect(x,y,60,60);//正方形
    }
  }
