
#include <iostream>
#define C(t,x) cout<<t<<x<<endl ;
#define C2(t) cout<<t<<endl ;

using namespace std;

void DoubleArrayElements(int A[], int size);
int SumOfArrayElement(int A[], int size);


class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {

		x += xa * speed;
		y += ya * speed;
	}
};

struct Enemy {
	// define static varaible equal to a variable in different namespace and we use scope operator ::
	// also needs definition as function
	static int age;
};

int Enemy::age;
//void TestFunction() {
//	C2("ih");
//}
int main()
{
	Player p;
	p.Move(8, 9);

	Enemy en;
	en.age = 6;

	Enemy::age = 9;
	//int B[] = { 1,2,3,4,5 };
	//int sizeOfArray = sizeof(B) / sizeof(int);
	//int sum = 0;
	//DoubleArrayElements(B, sizeOfArray);
	//sum = SumOfArrayElement(B, sizeOfArray);

	//C("Sum Of Array ", sum);
	int* p;
	int size;
	C2("enter array size ");
	cin >> size;

	p = new int[size];
	C("size of p ", sizeof(p));
	//delete[] p;
	//TestFunction();

}

