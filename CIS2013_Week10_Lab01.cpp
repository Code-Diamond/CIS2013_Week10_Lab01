#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int v1;
	int v2;
	int *p1;		
	int *p2;	

	v1 = 22; v2 = 33;

	p1 = &v1;
	p2 = &v2;	

	p1 = p2;
	v1 = 44;
	v2 = 55;

	cout << "p1 is: " << *p1 << endl;
	cout << "p2 is: " << *p2 << endl;
	cout << "v1 is: " << v1 << endl;
	cout << "v2 is: " << v2 << endl;

	v1 = 23;

	cout << "p1 is now: " << p1 << endl;
	cout << "p2 is now: " << p2 << endl;
	cout << "v1 is now: " << v1 << endl;
	cout << "v2 is now: " << v2 << endl;


	return 0;
}
