#include <iostream>
using namespace std;
class Move
{
private:
	double x; double y;
public:
	Move(double a = 0, double b = 0); // sets x, y to a, b
	void showmove() const; // shows current x, y values 
    Move add(const Move & m) const; //this function adds x of m to x of invoking object to get new x,
	//adds y of m to y of invoking object to get new y, creates a new
	//move object initialized to new x, y values and returns it
	void reset(double a = 0 , double b = 0); // resets x,y to a, b
	double get_x() const;
	double get_y() const;
};
 Move::Move(double a = 0, double b = 0)
{
	double x = a; double y = b;
}
void Move::reset(double a = 0, double b = 0)
{
	double x = a; double y = b;
}
void Move::showmove() const
{
	cout << "(" << x << "," << y << ")" << endl;
}
double Move::get_x() const
{
	return x;
}
double Move::get_y() const
{
	return y;
}
 Move Move::add(const Move &m) const
{
	Move t = m;
	double x1, x2, y1, y2;
	 x1 = t.get_x();
	 y1 = t.get_y();
	 x2 = x + x1;
	 y2 = y + y1;
	 Move t(x2,y2);
		 return t;
}

int main()
{
	Move a(1, 2);
	Move b(3, 4);
	Move c = a.add(b);
	c.showmove();
}
