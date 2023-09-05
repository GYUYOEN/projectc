#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int rad;		// 반지름
	Point center;	// 원의 중심
public:
	void Init(int x, int y, int r)
	{
		rad = r;
		center.Init(x, y);
	}
	void ShowCircleInfo() const
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};

/*
class InnerCirle
{
private:
	int x;
	int y;
	int radius;
public:
	void Init(int a, int b, int c)
	{
		x = a;
		y = b;
		radius = c;
	}
	void ShowInnerCicleInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		cout << "radius: " << radius << endl;
		cout << "[" << x << ", " << y << "]" << endl;
	}
};

class OutterCircle
{
private:
	int x;
	int y;
	int radius;
public:
	void Init(int d, int e, int f)
	{
		x = d;
		y = e;
		radius = f;
	}
	void ShowOutterCircleInfo() const
	{
		cout << "Outter Circle Info..." << endl;
		cout << "radius: " << radius << endl;
		cout << "[" << x << ", " << y << "]" << endl;
	}
};


class Ring
{
private:
	InnerCirle c1;
	OutterCircle c2;
public:
	void Init(int a, int b, int c, int d, int e, int f)
	{
		c1.Init(a, b, c);
		c2.Init(d, e, f);
	}
	void ShowRingInfo() const
	{
		c1.ShowInnerCicleInfo();
		c2.ShowOutterCircleInfo();
	}
};
*/

class Ring
{
private:
	Circle inCircle;
	Circle outCircle;
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inCircle.Init(inX, inY, inR);
		outCircle.Init(outX, outY, outR);
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();
		cout << "Outter Cirlce Info..." << endl;
		outCircle.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}