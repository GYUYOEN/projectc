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

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}