//week08-2好玩的程式設計 黑白棋 互動下棋
//File-Preference字型放很大
void setup(){
    size(620,620);
}
int[][]board=new int [10][10];//java的陣列
void mousePressed(){
int i=(mouseY-10)/60,j=(mouseX-10)/60;
if (mouseButton==LEFT)board[i][j]=1;//黑旗
if (mouseButton==RIGHT)board[i][j]=2;//白旗
if (mouseButton==ENTER)board[i][j]=0;//清空
}
void draw(){
background(#B49735);//背景色
for(int i=0;i<10;i++){//左手i高度y
  for(int j=0;j<10;j++){//右手j寬度x
    int x=10+j*60,y=10+i*60;//小心i j
    fill(#B49735);//填充色彩
    strokeWeight(2);//線條的粗細
    rect(x,y,60,60);//正方形
    if(board[i][j]==1)fill(0);
    if(board[i][j]==2)fill(255);
    if(board[i][j]!=0)ellipse(30+x,30+y,50,50);//畫旗子
    }
  }
}
