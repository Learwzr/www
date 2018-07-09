/////////////////////////////////////////////////
//弹球程序
//编译环境 vc++2017
//2018/7/9
////////////////////////////////////////////////
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	initgraph(640, 480);
	RECT rt;
	GetClientRect(GetHWnd(), &rt);
	bool top = true;
	bool left = false;
	bool right = true;
	bool bottom = false;  //是否触碰边界的bool型
	int cx = 0;
	int cy = 0;  //球的坐标
	setfillcolor(GREEN);
	BeginBatchDraw();//批量绘图
	while (true)
	{
		cleardevice();
		//判断是否触及边界
		if (cx >= rt.right - 50)
		{
			left = true;
			right = false;
		}
		else if (cx <= rt.left)
		{
			left = false;
			right = true;


		}
		//移动
		if (left)
		{
			cx--;
		}
		if (right)
		{
			cx++;
		}


		if (cy >= rt.bottom - 50)
		{
			top = true;
			bottom = false;
		}
		else if (cy <= rt.top)
		{
			bottom = 1;
			top = false;
		}
		if (bottom)
		{
			cy++;
		}
		if (top)
		{
			cy--;
		}
		solidcircle(cx, cy, 50);
		FlushBatchDraw();
	}
	EndBatchDraw();
	return 0;
}
