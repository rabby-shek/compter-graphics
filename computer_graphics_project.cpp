#include<iostream>
#include<graphics.h>
#include <conio.h>
#include<dos.h>
#include<math.h>
using namespace std;

void myname()
{

    int i,j;
       //drawing alphabet M starts here
    //drawing line 1
    setcolor(YELLOW);
    for(i=30;i<=70;i++){
        line(30,i,30,i++);
        delay(100);
    }
    //drawing line 2
    for(i=30;i<=50;i++)
    {
        line(30,30,i++,i++);
        delay(100);
    }
    //drawing line 3
    line(50,50,60,30);
    //drawing line 4
    for(i=30;i<=70;i++)
    {
        line(60,i,60,i++);
        delay(100);
    }

    //drawing alphabet M ends here


    //drawing alphabet D starts here
    //drawingline 1 here
    for(i=30;i<=70;i++)
    {
        line(80,i,80,i++);
        delay(100);
    }

    //drawing eclipes starts here

        ellipse(80, 50, -90,
     90, 30, 20);


    //drawing eclipes ends here

    //drawing alphabets D ends here


    //drawing alphabet R  starts here
     for(i=30;i<=90;i++)
    {
        line(130,i,130,i++);
        delay(100);
    }

    ellipse(130, 45, -90,
     90, 30, 15);
     line(130,57,160,90);
    //drawing alphabet R  ends here

    //drawing alphabet A starts here
    line(180,30,165,90);
    line(180,30,200,90);
    line(170,70,192,67);
    //drawing alphabets A ends here

    //drawing alphabet   firts B starts here
     for(i=30;i<=90;i++)
    {
        line(210,i,210,i++);
        delay(100);
    }
    ellipse(210,45, -90,
     90, 30, 15);
     ellipse(210,75, -90,
     90, 30, 16);
    //drawing alphabets first B ends here

    //drawing 2nd starts B here
     for(i=30;i<=90;i++)
    {
        line(250,i,250,i++);
        delay(100);
    }
     ellipse(250,45, -90,
     90, 30, 15);
     ellipse(250,75, -90,
     90, 30, 16);
    //drawing 2nd B ends here

    //drawing alphabets y starts here
    line(280,30,305,60);
    line(310,30,300,100);
    //drawing alphabets y ends here

    //drawing alphabets s starts here
    ellipse(350,50, 90,
     -90, 30, 20);
     ellipse(350,89, -90,
     90, 30, 20);




    //drawing alphabets s ends here
    //drawing h starts here
    line(390,30,390,100);
    line(430,30,430,100);
    line(390,65,430,65);
    //drawing h ends here
    //drawing alphabet E starts here
    line(450,30,450,100);
    line(450,65,490,65);
    line(450,30,495,30);
    line(450,100,495,100);
    //drawing alphabet E ends here
    //K start
    line(510,30,510,100);
    line(510,65,550,95);
    line(510,65,550,35);
    //k end

     //drawing alphabets s starts here
    ellipse(590,50, 90,
     -90, 30, 20);
     ellipse(590,89, -90,
     90, 30, 20);




    //drawing alphabets s ends here

    //u start
    ellipse(670,30, 180,
     0, 40, 90);
    //u end
    //v start
    line(730,30,760,100);
    line(780,30,760,100);

    //v end
      //o start
    ellipse(830,60, 360,
     0, 40, 50);
    //o end



}

void national()
{
    outtext("CSE2001019013");

    setcolor(GREEN);
    rectangle(100,30,400,170);
    //green color int value is equal 2
    //solid style int value is equal 1
    setfillstyle(1,2);

    floodfill(110,35,GREEN);


     setcolor(RED);
   circle(225,100,50);
   setfillstyle(1,4);
   floodfill(225,100,RED);

   setcolor(DARKGRAY );


   rectangle(80,30,100,400);
   setfillstyle(1,DARKGRAY);
   floodfill(81,32,DARKGRAY);
   rectangle(30,400,150,450);
   setfillstyle(1,DARKGRAY);
   floodfill(31,401,DARKGRAY);


}


void smilyfaceemoji()
{
     int i;
     outtextxy(260, 410, "Smile Emoji");
      setcolor(YELLOW);

    // creating circle and fill it with
    // yellow color using floodfill.
    circle(300, 300, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 300, YELLOW);

    // Set color of background to black
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    // Use fill ellipse for creating eyes
     for(i=0;i<=15;i++)
    {
        fillellipse(280, 270, 8, i++);
        fillellipse(320, 270, 8, i++);
        delay(300);
    }
    fillellipse(280, 270, 8, 15);
    fillellipse(320, 270, 8, 15);

    // Use ellipse for creating mouth

    for(i=0;i<=14;i++)
    {
        ellipse(300, 340, 205, 335, 35, i++);
        delay(300);
    }




}

void my_id_name()
{
    outtextxy(10,10,"MD Rabby Shek Suvo\n");
    outtextxy(10,40,"CSE2001019013");
}


void moving_cycle()
{
    int i;

    // Move the cycle
    for (i = 0; i < 600; i++) {
        // Upper body of cycle
        line(50 + i, 405, 100 + i, 405);
        line(75 + i, 375, 125 + i, 375);
        line(50 + i, 405, 75 + i, 375);
        line(100 + i, 405, 100 + i, 345);
        line(150 + i, 405, 100 + i, 345);
        line(75 + i, 345, 75 + i, 370);
        line(70 + i, 370, 80 + i, 370);
        line(80 + i, 345, 100 + i, 345);

        // Wheel
        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);

        // Road
        line(0, 436, getmaxx(), 436);

        // Stone
        rectangle(getmaxx() - i, 436,
                  650 - i, 431);

        // Stop the screen for 10 secs
        delay(10);

        // Clear the screen
        cleardevice();
    }
}

void house()
{


    //moon design starts here

    circle(550,50,30);
    floodfill(550,50,15);
    //moon design ends here
    // Create lines for structure
    // of the House
    line(100, 350, 50, 400);

    line(100, 350, 150, 400);

    line(100, 350, 350, 350);
    line(350, 350, 400, 400);

    // Draw rectangle to give proper
    // shape to the house
    setfillstyle(CLOSE_DOT_FILL,WHITE);

    rectangle(50, 400, 150, 500);

    floodfill(51, 401, WHITE);
    setfillstyle(2,CYAN);
    rectangle(150, 400, 400, 500);
    floodfill(151,410,WHITE);
    setfillstyle(SOLID_FILL ,YELLOW);
    rectangle(250, 430, 290, 500);
    floodfill(251,431,WHITE);
    setfillstyle(SOLID_FILL ,YELLOW);
    rectangle(80, 430, 120, 470);
    floodfill(81,431,WHITE);



    // Set color using setfillstyle()
    // which take style and color as
    // an argument
    //filling with cyan line=2,color=3=cyan color5


     //Fill the shapes with colors white


     //drawing star starts here
    int i, x, y;
    while (!kbhit()) {
      /* color 500 random pixels on screen */
   for(i=0; i<=100; i++) {
       x=rand()%getmaxx();
          y=rand()%200;
          putpixel(x,y,15);
      }
      delay(10000);

      /* clears screen */

    }
    //drawing star ends here

}

void star()
{
    setfillstyle(CLOSE_DOT_FILL,WHITE);



            line(100,85,80,140);
			line(100,85,120,140);
			line(20,140,80,140);
			line(120,140,180,140);
			line(60,175,20,140);
			line(60,175,45,230);
			line(45,230,100,190);
			line(155,230,100,190);
			line(155,230,140,175);
			line(140,175,180,140);
            floodfill(100, 87, WHITE);
}


doremon()
{
       setfillstyle(SOLID_FILL, CYAN);

    // Head Outer Circle
    circle(500, 200, 100);

    // Head Inner Circle
    circle(500, 212, 88);
    floodfill(502, 102, 15);
    setfillstyle(SOLID_FILL, CYAN);

    // Body Outer Circle
    circle(500, 400, 100);

    // Body Inner Circle
    circle(500, 388, 88);
    floodfill(502, 498, 15);
    setfillstyle(SOLID_FILL, RED);

    // NOSE
    circle(502, 214, 10);
    floodfill(504, 216, 15);

    // Left Eye
    circle(460, 170, 15);

    // Right Eye
    circle(540, 170, 15);

    // Left Mustache Middle
    // Line
    line(430, 214, 380, 214);

    // Left Mustache Upper
    // Line
    line(430, 214, 380, 196);

    // Left Mustache Lower
    // Line
    line(430, 214, 380, 234);

    // Right Mustache Middle
    // Line
    line(570, 214, 620, 214);

    // Right Mustache Upper
    // Line
    line(570, 214, 620, 196);

    // Right Mustache Lower
    // Line
    line(570, 214, 620, 234);

    // Nose-Mouth Connector
    line(502, 224, 502, 240);

    // Mouth Horizontal  Line
    line(465, 240, 535, 240);

    // Mouth Tangent Line
    line(465, 240, 502, 260);

    // Mouth Tangent Line
    line(502, 260, 535, 240);

    setfillstyle(SOLID_FILL, CYAN);

    // Right Up Hand
    line(500, 300, 650, 320);

    // Right Low Hand
    line(500, 300, 650, 340);

    // Right Hand Joining
    line(650, 320, 650, 340);
    floodfill(645, 332, 15);
    setfillstyle(SOLID_FILL, CYAN);

    // Left Up Hand
    line(500, 300, 350, 320);

    // Left Down Hand
    line(500, 300, 350, 340);

    // Left Hand Join
    line(350, 320, 350, 340);
    floodfill(355, 332, 15);
    circle(665, 331, 15);
    circle(335, 331, 15);

    // Pocket Horizontal
    line(445, 380, 555, 380);

    // Pocket Tangent
    line(445, 380, 500, 420);

    // Pocket Tangent
    line(500, 420, 555, 380);
    setfillstyle(SOLID_FILL, RED);

    // Bell Pad Upper Horizontal
    line(430, 298, 570, 298);

    // Bell Pad Lower Horizontal
    line(430, 308, 570, 308);

    // Bell Pad  Left Join
    line(430, 298, 430, 308);

    // Bell Pad Right Join
    line(570, 298, 570, 308);
    floodfill(432, 302, 15);
    floodfill(568, 302, 15);
    floodfill(500, 307, 15);
    setfillstyle(SOLID_FILL,
                 YELLOW);

    // Bell
    circle(500, 323, 15);
    floodfill(502, 325, 15);
    setcolor(BLACK);

    // Inner Bell Upper Line
    line(485, 323, 515, 323);

    // Inner Bell Upper Line
    line(485, 328, 515, 328);
    setcolor(WHITE);

    // Left Leg Left Line
    line(450, 480, 450, 550);

    // Left Leg Right Line
    line(470, 490, 470, 550);

    // Right Leg Right Line
    line(550, 480, 550, 550);

    // Right Leg Left Line
    line(530, 490, 530, 550);

    // Left Leg Pad
    rectangle(440, 550, 480, 570);

    // Right Leg Pad
    rectangle(520, 550, 560, 570);

    // Left Leg Color
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(460, 500, 15);

    // Right Leg Color
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(540, 500, 15);
}


void rainbow()
{
    int x, y, i;

    x = getmaxx() / 2;//finding centre x-ordinate of screen
    y = getmaxy() / 2;//finding centre y-ordinate of screen

    for (i=30; i<200; i++)
    {
        // delay function under dos.h for holding the
        // function for some time
        delay(100);

        // selecting  color for making of rainbow
        setcolor(i/10);

        // making of arc with fixed centre and increasing radius
        arc(x, y, 0, 180, i-10);
    }
}


void taj_body()
{
    // Main Base
    rectangle(10, 650, 1350, 680);
    rectangle(550, 300, 800, 650);
    rectangle(540, 290, 810, 650);

    // Left Door Line
    line(600, 650, 600, 400);

    // Right Door Line
    line(750, 650, 750, 400);

    line(600, 400, 675, 390);
    line(675, 390, 750, 400);
    arc(675, 240, 330, 210, 155);

    // Main Finial
    line(655, 85, 675, 30);
    line(675, 30, 695, 87);

    // Left Side
    line(540, 315, 445, 315);
    arc(490, 315, 0, 180, 45);

    // Left Finial
    line(480, 270, 490, 250);
    line(490, 250, 500, 270);

    // Left Vertical Line
    line(445, 315, 445, 355);

    // Lower Left Join
    line(445, 355, 540, 355);

    // Again Lower Left Join
    line(445, 375, 540, 375);

    // Left Tangent
    line(445, 355, 375, 370);

    // Lower Left Tangent
    line(445, 375, 375, 390);

    // Left Last Vertical
    line(375, 370, 375, 650);

    // Middle Left Rectangle
    rectangle(450, 390, 530, 650);

    // Left Rectangle Divider
    line(450, 520, 530, 520);

    // Left Rectangle Side Structure
    line(440, 650, 440, 390);
    line(385, 650, 385, 405);
    line(440, 390, 385, 405);

    // Divider
    line(440, 520, 385, 520);

    // Creating Left Lower Spike
    line(460, 650, 460, 585);
    line(520, 650, 520, 585);
    line(460, 585, 490, 555);
    line(520, 585, 490, 555);

    // Creating Left Upper Spike
    line(460, 520, 460, 455);
    line(520, 520, 520, 455);
    line(460, 455, 490, 425);
    line(520, 455, 490, 425);

    // Right Side
    line(810, 315, 905, 315);
    arc(860, 315, 0, 180, 45);

    // Right Finial
    line(850, 270, 860, 250);
    line(860, 250, 870, 270);

    // Right Vertical Line
    line(905, 315, 905, 355);
    line(905, 355, 810, 355);

    // Lower Right Join
    line(905, 355, 810, 355);

    // Again Right Left Join
    line(905, 375, 810, 375);

    // Right Tangent
    line(905, 355, 975, 370);

    // Lower Right Tangent
    line(905, 375, 975, 390);

    // Right Last Vertical
    line(975, 370, 975, 650);

    // Middle Right Rectangle
    rectangle(820, 390, 900, 650);

    // Right Rectangle Divider
    line(820, 520, 900, 520);

    // Right Rectangle Side Structure
    line(910, 650, 910, 390);
    line(965, 650, 965, 405);
    line(910, 390, 965, 405);

    // Divider
    line(910, 520, 965, 520);

    // Creating Right Lower Spike
    line(830, 650, 830, 585);
    line(890, 650, 890, 585);
    line(830, 585, 860, 555);
    line(890, 585, 860, 555);

    // Creating Right Upper Spike
    line(830, 520, 830, 455);
    line(890, 520, 890, 455);
    line(830, 455, 860, 425);
    line(890, 455, 860, 425);
}

void left_minars()
{
    // 1st Left Minar
    // 1st Step
    line(20, 650, 30, 500);
    line(120, 650, 110, 500);
    line(110, 500, 30, 500);

    // 2nd Step
    line(30, 500, 20, 480);
    line(110, 500, 120, 480);
    line(120, 480, 20, 480);
    line(30, 480, 40, 330);
    line(110, 480, 100, 330);
    line(40, 330, 100, 330);
    line(40, 330, 30, 310);
    line(100, 330, 110, 310);
    line(110, 310, 30, 310);

    // 3rd Step
    line(40, 310, 50, 160);
    line(100, 310, 90, 160);
    line(50, 160, 90, 160);
    line(50, 160, 40, 140);
    line(90, 160, 100, 140);
    line(40, 140, 100, 140);
    line(40, 140, 60, 120);
    line(100, 140, 80, 120);
    line(60, 120, 80, 120);
    line(60, 120, 70, 100);
    line(70, 100, 80, 120);

    // 2nd Left Minar
    // 1st Step
    line(170, 650, 180, 575);
    line(270, 650, 260, 575);
    line(180, 575, 260, 575);

    // 2nd Step
    line(180, 575, 170, 555);
    line(260, 575, 270, 555);
    line(170, 555, 270, 555);
    line(180, 555, 190, 480);
    line(260, 555, 250, 480);
    line(190, 480, 250, 480);

    // 3rd Step
    line(190, 480, 180, 460);
    line(250, 480, 260, 460);
    line(180, 460, 260, 460);
    line(190, 460, 200, 385);
    line(250, 460, 240, 385);
    line(200, 385, 240, 385);
    line(200, 385, 190, 365);
    line(240, 385, 250, 365);
    line(190, 365, 250, 365);
    line(190, 365, 210, 345);
    line(250, 365, 230, 345);
    line(210, 345, 230, 345);
    line(210, 345, 220, 325);
    line(220, 325, 230, 345);
}

void right_minars()
{
    // 1st Right Minar
    // 1st Step
    line(1340, 650, 1330, 500);
    line(1240, 650, 1250, 500);
    line(1330, 500, 1250, 500);

    // 2nd Step
    line(1330, 500, 1340, 480);
    line(1250, 500, 1240, 480);
    line(1240, 480, 1340, 480);
    line(1330, 480, 1320, 330);
    line(1250, 480, 1260, 330);
    line(1320, 330, 1260, 330);
    line(1320, 330, 1330, 310);
    line(1260, 330, 1250, 310);
    line(1250, 310, 1330, 310);

    // 3rd Step
    line(1320, 310, 1310, 160);
    line(1260, 310, 1270, 160);
    line(1310, 160, 1270, 160);
    line(1310, 160, 1320, 140);
    line(1270, 160, 1260, 140);
    line(1320, 140, 1260, 140);
    line(1320, 140, 1300, 120);
    line(1260, 140, 1280, 120);
    line(1300, 120, 1280, 120);
    line(1280, 120, 1290, 100);
    line(1290, 100, 1300, 120);

    // 2nd Right Minar
    // 1st Step
    line(1090, 650, 1100, 575);
    line(1190, 650, 1180, 575);
    line(1100, 575, 1180, 575);

    // 2nd Step
    line(1100, 575, 1090, 555);
    line(1180, 575, 1190, 555);
    line(1090, 555, 1190, 555);
    line(1100, 555, 1110, 480);
    line(1180, 555, 1170, 480);
    line(1110, 480, 1170, 480);

    // 3rd Step
    line(1110, 480, 1100, 460);
    line(1170, 480, 1180, 460);
    line(1180, 460, 1100, 460);
    line(1110, 460, 1120, 385);
    line(1170, 460, 1160, 385);
    line(1120, 385, 1160, 385);
    line(1110, 365, 1120, 385);
    line(1160, 385, 1170, 365);
    line(1110, 365, 1170, 365);
    line(1110, 365, 1130, 345);
    line(1170, 365, 1150, 345);
    line(1130, 345, 1150, 345);
    line(1130, 345, 1140, 325);
    line(1140, 325, 1150, 345);
}


int main()
{


    int gd = DETECT, gm,x1,y1,x2,y2,n;






    cout <<"MD Rabby Shek Suvo"<<endl;
    cout <<"CSE2001019013\n\n"<<endl;

    cout << "1. my name and id"<<endl;
    cout << "2. The National Flag of Bangladesh"<<endl;
    cout << "3. smily Emoji"<<endl;
    cout << "4. Moving Cycle"<<endl;
    cout << "5. A Monlight Night"<<endl;
    cout << "6. Star"<<endl;
    cout << "7. Doremon"<<endl;
    cout << "8. Rainbow"<<endl;
    cout << "9. Taj Minar"<<endl;
while(1)
{
     cout << "choose your function : ";
    cin >> n;
    initwindow(1200, 700); /* (size X, size Y) */
    setactivepage(0);


    switch(n){
    case 1:
        myname();
        break;

    case 2:
        national();


        break;
    case 3:
        my_id_name();
        smilyfaceemoji();
        break;
    case 4:
        my_id_name();
        moving_cycle();

        break;
    case 5:
        my_id_name();
        house();
        break;
    case 6:
        my_id_name();
        star();
        break;
    case 7 :
        my_id_name();
        doremon();
        break;
    case 8 :
        my_id_name();
        rainbow();
        break;
    case 9 :
        my_id_name();

    // Calling taj_body() function
    taj_body();

    // Calling left_minars() function
    left_minars();

    // Calling right_minars() function
    right_minars();

        break;



    }



}
getch();

    closegraph();

    return 0;
}
