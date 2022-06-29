
#include<graphics.h>


int main()
{
	int gd=DETECT, gm;
	 int x,y,xx,yy,r;
		  int i=0;


	initgraph(&gd, &gm, (char*)"");

	
	
		
	/*	for(int i=5;i<=100;i++)
		{
		
		line(600,400,i,i);
		setcolor(BLACK);
	
		setfillstyle(i%10,YELLOW);
		floodfill(i,i,RED);
		delay(100);
	}*/
	   
	   
	   
	   
	    /*int m=100;
	
		for(int i=1;i<=179;i++)
		{
			
		 line(500-(i/2),500+((3*i)/2),500+(i/2),500-i);
		  arc(500,500,90+i,90-i,i);
		  setcolor(RED);
		 
		   delay(50);
		
	}   setcolor(WHITE);
		 line(590,320,540,350);
		  line(590,320,620,370);*/
		  
		  
		  
		  
		/*  ellipse(700,300,0,360,200,100);
		  for(int i=1;i<=200 ;i++)
		  {
		  
		  fillellipse(700,300,i,i);
		setcolor(i);
		  delay(50);
		  
	}*/
	
	
	
		 /* setcolor(RED);
		  setfillstyle(3,YELLOW);
		  circle(100,100,50);
		  floodfill(100,300,RED);
		  */
		  
		 
		 
		 
		 
		  
		/* x=getmaxx();
		 y=getmaxy();
		 while(!kbhit())
		 {
		 	i++;
		 	
		 	setfillstyle(random(i),random(30));
		 	
		 	circle(xx=random(x),yy=random(y),random(30));
		 	setfillstyle(random(i),random(30));
		 	floodfill(xx,yy,getmaxcolor());
      		delay(200);		 	
		 	
		 	
		 }*/
		  
		  
		  
		  
		 
		 /* int x=getmaxx()/2;
		  int y=30;
		  int i, flag=0;
		  while(!kbhit())
		  {
		  	
		  	if(y>=getmaxy()-30||y<=30)
		  	flag=!flag;
		  	
		  	setcolor(RED);
		  	setfillstyle(1,RED);
		  	circle(x,y,30);
		  	floodfill(x,y,RED);
		  	
		  	
		  	delay(50);
		  	cleardevice();
		  	if(flag)
		  	{
		  		y=y+5;
		  		
		  	}
		  	
		  	else
		  	{y=y-5;
			  }
		  	
		  	
		  	
		  	
		  	
		  }*/
		  
		  
		  for(int i=1;i<500;i++)
		  {
		  
		  
		   for(int i=1;i<=9;i++)
 		 {
		  
		 rectangle(600,300,900,600);
		 line(600,300,750,200);
		 line(750,200,1050,200);
		 line(900,300,1050,200);
		 line(900,600,1050,500);
		 
		 line(1050,200,1050,500);

 		
		  
		  setcolor(i);
		  rectangle(600,300,700,400);
		  setfillstyle(1,i);
		  floodfill(650,350,i);
		  
		  
		   setcolor(i+2);
		  	rectangle(600,400,700,500);
		  	 setfillstyle(1,i+2);
		  floodfill(650,450,i+2);
		    
			
			 setcolor(i+1);
			rectangle(600,500,700,600);
			 setfillstyle(1,i+1);
		  floodfill(650,550,i+1);
			
			
			
			 setcolor(i+3);
			 rectangle(700,300,800,400);
			  setfillstyle(1,i+3);
		  floodfill(750,350,i+3);
			
			
			
			 setcolor(i+5);
			  rectangle(700,400,800,500);
			 setfillstyle(1,i+5);
		  floodfill(750,450,i+5);
			
			
			
			setcolor(i+6);
			   rectangle(700,500,800,600); 
			 setfillstyle(1,i+6);
		  floodfill(750,550,i+6);
			
			
			 setcolor(i+4);
			    rectangle(800,300,900,400);
			 setfillstyle(1,i+4);
		  floodfill(850,350,i+4);
			
			
			 setcolor(i);
				 rectangle(800,400,900,500);
			 setfillstyle(1,i);
		  floodfill(850,450,i);
			
			 
			 setcolor(i+3);
				  rectangle(800,500,900,600);
				   setfillstyle(1,i+3);
		  floodfill(850,550,i+3);
		  
		   setcolor(i+3);
			 line(600,300,700,300);
		 line(600,300,650,267);
		 line(650,267,750,267);
		 line(700,300,750,267);
			  setfillstyle(1,i+3);
		  floodfill(650,280,i+3);
		  
		  
		  	setcolor(i+6);
			  line(650,267,700,233);
		 line(700,233,800,233);
		 line(800,233,750,267);
		 line(750,267,650,267); 
			 setfillstyle(1,i+6);
		  floodfill(700,240,i+6);
		  
		  
		  setcolor(i);
				line(700,233,750,200);
		 line(750,200,850,200);
		 line(850,200,800,233);
		 line(800,233,700,233);
			 setfillstyle(1,i);
		  floodfill(750,210,i);
		  
		  
		  setcolor(i+3);
			line(850,200,950,200);
		 line(950,200,900,233);
		 line(900,233,800,233);
		 line(800,233,850,200);
			  setfillstyle(1,i+3);
		  floodfill(850,210,i+3);
		  
		  
		    setcolor(i+2);
		  	line(800,233,750,267);
		 line(750,267,850,267);
		 line(850,267,900,233);
		 line(900,233,800,233);
		  	 setfillstyle(1,i+2);
		  floodfill(800,240,i+2);
		  
		  
		  setcolor(i+4);
			    line(750,267,700,300);
		 line(700,300,800,300);
		 line(800,300,850,267);
		 line(850,267,750,267);
			 setfillstyle(1,i+4);
		  floodfill(750,280,i+4);
		  
		  
		   setcolor(i);
		line(950,200,1050,200);
		 line(1050,200,1000,233);
		 line(1000,233,900,233);
		 line(900,233,950,200);
		  setfillstyle(1,i);
		  floodfill(950,210,i);
		  
		  
		   setcolor(i+5);
		  	line(900,233,1000,233);
		 line(1000,233,950,267);
		 line(950,267,850,267);
		 line(850,267,900,233);
		  	 setfillstyle(1,i+5);
		  floodfill(900,240,i+5);
		  
		  	
			  setcolor(i+6);
			  line(950,267,900,300);
		 line(900,300,800,300);
		 line(800,300,850,267);
		 line(850,267,950,267); 
			 setfillstyle(1,i+6);
		  floodfill(850,280,i+6);
		  
		  
		  
		   setcolor(i+2);
		  	line(900,300,950,267);
		 line(950,267,950,367);
		 line(950,367,900,400);
		 line(900,400,900,300);
		  	 setfillstyle(1,i+2);
		  floodfill(930,350,i+2);
		  
		  
		  
		   setcolor(i+4);
		  	line(950,267,1000,233);
		 line(1000,233,1000,333);
		 line(1000,333,950,367);
		 line(950,367,950,267);
		  	 setfillstyle(1,i+4);
		  floodfill(980,300,i+4);
		  
		  
		  
		  
	     	setcolor(i+6);
			  line(1000,233,1050,200);
		 line(1050,200,1050,300);
		 line(1050,300,1000,333);
		 line(1000,333,1000,233); 
			 setfillstyle(1,i+6);
		  floodfill(1030,280,i+6);
		  
		  
		  
		   setcolor(i);
				line(900,400,950,367);
		 line(950,367,950,467);
		 line(950,467,900,500);
		 line(900,500,900,400);
			 setfillstyle(1,i);
		  floodfill(930,450,i);
		  
		  
		  
		   setcolor(i+6);
			    line(950,367,1000,333);
		 line(1000,333,1000,433);
		 line(1000,433,950,467);
		 line(950,467,950,367);
			 setfillstyle(1,i+6);
		  floodfill(980,400,i+6);
		  
		  
		  
		 setcolor(i);
			line(1000,333,1050,300);
		 line(1050,300,1050,400);
		 line(1050,400,1000,433);
		 line(1000,433,1000,333);
			  setfillstyle(1,i);
		  floodfill(1030,380,i); 
		  
		  
		  
		  setcolor(i+5);
		  	line(900,500,950,467);
		 line(950,467,950,567);
		 line(950,567,900,600);
		 line(900,600,900,500);
		  	 setfillstyle(1,i+5);
		  floodfill(930,550,i+5); 
		  
		  
		  
		  
		  setcolor(i+2);
		  	line(950,467,1000,433);
		 line(1000,433,1000,533);
		 line(1000,533,950,567);
		 line(950,567,950,467);
		  	 setfillstyle(1,i+2);
		  floodfill(980,500,i+2);
		  
		  
		  
		  
		  setcolor(i);
				line(1000,433,1050,400);
		 line(1050,400,1050,500);
		 line(1050,500,1000,533);
		 line(1000,533,1000,433);
			 setfillstyle(1,i);
		  floodfill(1030,480,i);
		  
		  
		  
		  delay(50);
		  
		  
		  
		 /*  setcolor(6);
				line(1050,430,1300,430);
		 line(1300,430,1150,670);
		 line(1150,670,1050,670);
		 line(1050,670,1050,430);
			 setfillstyle(1,6);
		  floodfill(1100,500,6);
		  
		   setcolor(6);
				line(1050,500,1050,670);
		 line(1050,670,900,670);
		 line(900,670,900,600);
		 line(900,600,1050,500);
			 setfillstyle(1,6);
		  floodfill(1000,650,6);
		  
		   setcolor(6);
				line(900,600,900,670);
		 line(900,670,600,670);
		 line(600,670,600,600);
		 line(600,600,900,600);
			 setfillstyle(1,6);
		  floodfill(700,650,6);
		  
		   setcolor(6);
				line(600,430,550,430);
		 line(550,430,400,670);
		 line(400,670,600,670);
		 line(600,670,600,430);
			 setfillstyle(1,6);
		  floodfill(550,600,6);
		  
		  */
		  
		  
	}
		  
		  
		  
		  
	}
		  
		  
	
		  
		  
		  
		  
		  
		  
		  
		
	
		getch();

	
	
	
	
	
	closegraph();

	
	
	
	
}
