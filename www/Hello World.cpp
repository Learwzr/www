/////////////////////////////////////////////////
//�������
//���뻷�� vc++2017
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
	bool bottom = false;  //�Ƿ����߽��bool��
	int cx = 0;
	int cy = 0;  //�������
	setfillcolor(GREEN);
	BeginBatchDraw();//������ͼ
	while (true)
	{
		cleardevice();
		//�ж��Ƿ񴥼��߽�
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
		//�ƶ�
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
