#include<graphics.h>


class man{
    public:
    void rainman(int i){
    circle(100+i,200,30);

    //body
    line(100+i,230,100+i,300);

    //hand
    line(100+i,240,100+30+i,240+40);
    line(100+i,240,100-30+i,240+40);
    //leg
    line(100+i,300,100+20+i,300+50);
    line(100+i,300,100-20+i,300+50);

    //road
    line(0,350,960,350);

    //handel
    arc(100+35+i,240+40,180,360,5);
    //rod
    line(100+i+40,240+40,100+40+i,240-100);
    line(140+100+i,140,40+i,140);
    //chatri
    arc(140+i,140,0,180,100);
    }
    void rainman(int x, int y){
        for(int k =0;k<100;k++){
        outtextxy(rand()%x,rand()%(y-150),"/");
    }
    }

};


int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    man m;
    for(int i = 0; i< 600; i++){
    //head
    m.rainman(i);
    
    int x = getmaxx();
    int y = getmaxy();
    m.rainman(x,y);

    delay(50);
    cleardevice();


    }


    getch();
    closegraph();


}