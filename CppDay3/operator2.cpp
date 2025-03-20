/*

*/
#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay) {
		printf("constructor call !!!\n");
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
	const Point& add(const Point& other) {
		printf("add() call!!!\n");
		return Point(x + other.x, y + other.y);
	}
	Point (const Point& other) {
		printf("copy constructor!!\n");
		this->x = other.x;
		this->y = other.y;
	}

};
int main()
{
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(30, 40);
	//obj2.showPoint();
	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();

	Point obj4(obj);
	obj4.showPoint();
	Point obj5 = obj2;
	obj5.showPoint();
	return 0;
}