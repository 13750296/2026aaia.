///week12-1好玩的程式設計 三角函數(卡牌旋轉 地鼠冒出來 有甚麼用)
void setup(){//設定
  size(500,500);//視窗大小
 }
 float a=0;//angle角度
 void draw(){//畫圖(每秒60張)
 //part1先畫出小圈圈再繞大圈圈了解cos(a)sin(a)
 //float x=250+cos(a)*200,y=250+sin(a)*200;
 //ellipse(x,y,10,10);//把x座標cos(a)y座標sin(a)
 //a+=0.01;//(angle角度)慢慢增加

 //part 2用for迴圈 畫出6個小圈圈
 background(#FFFFF2);//(淡黃色)
 for(int i=0;i<6;i++){
  //float x=250+cos(a+i*PI/3)*200,y=250+sin(a+i*PI/3)*200;
  //ellipse(x,y,10,10);小圓
  //part3把小圓改成長方形
  float x=250+cos(a+i*PI/3)*200,y=250+sin(a+i*PI/3)*100;
  rect(x-40,y-50,80,100);//改成長方形而且往左移一半才不會歪掉
 }
 a+=0.03;//(angle角度)慢慢增加
 }
