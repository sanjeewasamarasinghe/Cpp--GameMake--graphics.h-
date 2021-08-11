#include <graphics.h>
#include <windows.h>

int main()

{
	DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CXSCREEN);
	initwindow(screenWidth,screenHeight,"",-3,-3);
	
	int rectPosX = 100,ciri1PosX = 200, ciri2PosX = 500, speed=100;
	
	while (1){
		
		
		
	setcolor(BLUE);
	for (int i=0; i <= 19; i++)
	rectangle(rectPosX-i, 300-i, rectPosX+500+i, 511+i);
	
	setcolor(RED);
	for(int i=0; i <= 69; i++){
	circle(ciri1PosX, 600, i);
	circle(ciri2PosX, 600, i);
	}
	
	setcolor(GREEN);
	for(int i=670; i <= 689; i++)
	line(0, i, screenWidth, i);
	
	if (GetAsyncKeyState(VK_LEFT)){
		rectPosX -= speed;
		ciri1PosX -= speed;
		ciri2PosX -= speed;
	}
	
	else if (GetAsyncKeyState(VK_RIGHT)){
		rectPosX += speed;
		ciri1PosX += speed;
		ciri2PosX += speed;
	}
	 
	 
	 delay (5);
	 cleardevice();
	 
	}
	
	
	
	
	
	
	
	getch();
}