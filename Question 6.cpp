#include <iostream>
using namespace std;
class Move
{
   private:
	   double x; double y;
   public:
	void Move(double a = 0, double b = 0); // sets x, y to a, b
	void showmove() const; // shows current x, y values 
    void Move add(const Move & m) const; //this function adds x of m to x of invoking object to get new x,
	//adds y of m to y of invoking object to get new y, creates a new
	//move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0); // resets x,y to a, b
};
void Move::Move(double a = 0 , double b = 0)
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
double get_x() const
{
	return x;
}
double get_y() const
{
	return y;
}
void Move::add(const Move &m) const
{
	Move t;
	double x1 = t.get_x() const;
	double y1 = t.get_y() const;
	double x2 = x + x1;
	double y2 = y + y1;
}

int main()
{
	Move a(1, 2);
	Move b(3, 4);
	Move c = a.add(b);
}
