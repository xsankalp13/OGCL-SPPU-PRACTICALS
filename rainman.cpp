#include<iostream>
#include<graphics.h>
using namespace std;
int main(){

    int graphicsDriver = DETECT,graphicsMode;
    initgraph(&graphicsDriver,&graphicsMode,NULL);

    for(int i = 0; i<600;i++){
    circle(100+i,240,25);
    line(100+i,265,100+i,325);
    if(i%4){
    line(100+i,275,65+i,310);
    }else{
        line(100+i,275,105+i,310);
    }
    line(100+i,275,135+i,310);
    line(100+i,325,100-15+i,325+55);
    line(100+i,325,100+15+i,325+55);
    line(0,325+55,600,325+55);
    arc(140+3+i,310,180,10,8);
    line(143+8+i,310,143+8+i,180);
    line(143+8-100+i,180,143+8+100+i,180);
    arc(143+8+i,180,0,180,100);

    int x = getmaxx();
    int y = getmaxy();
    for(int j = 0; j<100;j++){
        outtextxy(rand()%x,rand()%(y-30),"/");
        setcolor(WHITE);
        //cleardevice();
    }

    delay(50);
    cleardevice();
    
    }

    getch();
    closegraph();


    return 0;
}