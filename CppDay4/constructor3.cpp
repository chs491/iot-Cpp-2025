/*
	��ü�� ���ϴ� �Լ� : add()
	������ �����Ѵ�.
*/
//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("constructor\n");
//	}
//	Point(const Point& other) {
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point& add(const Point& other) {
//		printf("add()\n");
//		//return Point(x + other.x, y + other.y);
//		/* ������ �����Ѵ�. */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//int main()
//{
//	Point p(10,20);
//	Point p2(30,40);
//	std::cout << "++++++++++++++++++++++++++++++++++++++" << std::endl;
//	/*Point p3;
//	p3 = p.add(p2);*/
//	Point p3 = p.add(p2);
//	p3.showPoint();
//	return 0;
//}