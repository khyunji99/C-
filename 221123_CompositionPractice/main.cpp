#include <iostream>
#include <math.h>

using namespace std;


class Point {
private:
	int _x, _y;

public:
	Point(int x, int y)
		: _x(x), _y(y) {}

	void SetX(int x) {
		_x = x;
	}

	int GetX() {
		return _x;
	}

	void SetY(int y) {
		_y = y;
	}

	int GetY() {
		return _y;
	}

	void Info() {
		cout << "x : " << _x << ", y : " << _y << endl;
	}

};

// sqrt( ) : 루트해주는 함수
// pow( ) : 자승해주는 함수
// ex) sqrt(4,8) : 4와 8을 더한 12에 루트 씌워주는 것
// ex) pow(5, 3) : 5를 3제곱 해주는 것
class Line {
private:
	Point _leftPt, _rightPt;

public:
	Line(int leftX, int leftY, int rightX, int rightY)
		: _leftPt(leftX, leftY), _rightPt(rightX, rightY) {}

	Line(Point leftPt, Point rightPt)
		: _leftPt(leftPt), _rightPt(rightPt) {}

	float GetLength() {
		int base = _rightPt.GetX() - _leftPt.GetX();
		int height = _leftPt.GetY() - _rightPt.GetY();

		float length = sqrt(pow(base, 2) + pow(height, 2));

		return length;
	}
};


// 직각 삼각형 클래스 만들고 면적 구해서 출력하기
class Triangle {
private:
	Point _leftPt, _rightPt, _topPt;
	

public:
	Triangle(int leftX, int leftY, int rightX, int rightY)
		: _leftPt(leftX, leftY), _rightPt(rightX, rightY), _topPt(rightX, leftY) {}
	
	Triangle(Point leftPt, Point rightPt, Point topPt)
		: _leftPt(leftPt), _rightPt(rightPt), _topPt(topPt) {}
	

	float GetArea() {
		int base = _topPt.GetX() - _leftPt.GetX();
		int high = _rightPt.GetY() - _topPt.GetY();

		float area = (float)(base * high) / 2;

		return area;
	}
};


/* 직사각형 클래스 만들고 면적 구해서 출력하기
class Rectangle {
private: // 지금은 점 4개 받고 있다.
	Point _leftBottomPt, _leftTopPt, _rightBottomPt, _rightTopPt;

public:
	Rectangle(int leftX, int leftY, int rightX, int rightY)
		: _leftBottomPt(leftX, leftY), _rightBottomPt(rightX, leftY), _leftTopPt(leftX, rightY), _rightTopPt(rightX, rightY) {}

	Rectangle(Point leftBottomPt, Point leftTopPt, Point rightBottomPt, Point rightTopPt)
		: _leftBottomPt(leftBottomPt), _leftTopPt(leftTopPt), _rightBottomPt(rightBottomPt), _rightTopPt(rightTopPt) {}

	float GetArea() {
		int base = _rightBottomPt.GetX() - _leftBottomPt.GetX();
		int high = _rightTopPt.GetY() - _rightBottomPt.GetY();

		int area = base * high;

		return area;
	}

};
*/

// 점 2개만 받아서 직사각형 넓이 면적 구해서 출력하기
class Rectangle {
private:
	Point _leftPt, _rightPt;

public:
	Rectangle(int leftX, int leftY, int rightX, int rightY)
		: _leftPt(leftX, leftY), _rightPt(rightX, rightY) {}

	Rectangle(Point leftPt, Point rightPt)
		: _leftPt(leftPt), _rightPt(rightPt) {}

	float GetArea() {
		int base = _rightPt.GetX() - _leftPt.GetX();
		int high = _rightPt.GetY() - _leftPt.GetY();

		int area = base * high;

		return area;
	}

};


// 원 클래스 만들고 면적 구해서 출력하기
class Circle {
private:
	Point _centerPt, _outsidePt;

public:
	Circle(int centerX, int centerY, int sideX, int sideY)
		: _centerPt(centerX, centerY), _outsidePt(sideX, sideY) {}

	Circle(Point centerPt, Point outsidePt)
		: _centerPt(centerPt), _outsidePt(outsidePt) {}


	float GetArea() {
		// 방법 1 (Line 클래스 사용하여 반지름 구하기)
		Line radius(_centerPt, _outsidePt);

		return pow(radius.GetLength(), 2) * 3.14;

	//	방법 2
	//	float radius = sqrt(pow((_centerPt.GetX() - _outsidePt.GetX()), 2) + pow((_centerPt.GetY() - _outsidePt.GetY()), 2));
	//	float area = pow(radius, 2) * 3.14;
	//	return area;
	}

};


int main() {
	Point pt1(0, 10);
	Point pt2(10, 20);

	Triangle triangle(0, 10, 10, 20);
	Rectangle rectangle(0, 10, 10, 20);
	Circle circle(0, 10, 10, 20);

	cout << "직각삼각형 넓이 : " << triangle.GetArea() << endl;
	cout << "직사각형 넓이 : " << rectangle.GetArea() << endl;
	cout << "원의 넓이 : " << circle.GetArea() << endl;



	return 0;
}