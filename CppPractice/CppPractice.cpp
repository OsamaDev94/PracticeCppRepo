
#include <iostream>
#define C(t,x) cout<<t<<x<<endl ;
#define C2(t) cout<<t<<endl ;

using namespace std;

void DoubleArrayElements(int A[], int size);
int SumOfArrayElement(int A[], int size);

// decleare extern members of a struct 


class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {

		x += xa * speed;
		y += ya * speed;
	}
};

struct Entity;

int main()
{
	/*Player m;
	m.Move(8, 9);*/


	//int B[] = { 1,2,3,4,5 };
	//int sizeOfArray = sizeof(B) / sizeof(int);
	//int sum = 0;
	//DoubleArrayElements(B, sizeOfArray);
	//sum = SumOfArrayElement(B, sizeOfArray);

	//C("Sum Of Array ", sum);
	/*int* p;
	int size;
	C2("enter array size ");
	cin >> size;

	p = new int[size];
	C("size of p ", sizeof(p));*/
	//delete[] p;
	//TestFunction();

	//-------------------- Static --------------------------
	
	
}

