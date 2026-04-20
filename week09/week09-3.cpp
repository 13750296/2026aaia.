//week09-3好玩的程式設計(氣球會變大)
PImage img;//宣告變數(圖)
void setup(){//設訂的函示(做1次)
    size(600,500);//設定視窗大小
//老師傳給你圖檔在桌面,把圖檔拉程式碼
    img=loadImage("balloon.png");//讀入圖片
}
float x,y,s=0.1;//一開始的氣球比較小
void draw(){//畫圖的函式(每秒60次)
   background(#FFFFF2);//畫背景淡黃色
   //image(img,mouseX-96/2,mouseY-32,96,132);
   if(mousePressed){//如果mouse壓下去
     s=s*1.02;//氣球會變大
     image(img,mouseX-96/2*s,mouseY-132*s,96*s,132*s);
   }else{s=0.1;//放開mouse 時,氣球就會變小
}
}//座標有稍微修改讓手拿氣球下面的地方
