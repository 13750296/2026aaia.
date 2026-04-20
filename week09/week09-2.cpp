//week09-2好玩的程式設計(互動氣球)
PImage img;//宣告圖檔
void setup(){
    size(600,500);//視窗大小
//老師傳給你圖檔在桌面,把圖檔拉程式碼
    img=loadImage("balloon.png");
}
void draw(){
   background(#FFFFF2);
   image(img,mouseX-96/2,mouseY-32,96,132);
}
