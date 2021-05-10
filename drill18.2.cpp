#include "std_lib_facilities.h"

// 18.2.1. Define a global vector<int> gv; initialize it with ten ints, 1, 2, 4, 8, 16, etc.
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// 18.2.2. Define a function f() taking a vector<int> argument
void f(vector<int>& v)
{

	// 18.2.3a. Define a local vector<int> lv with the same number of elements as the argument vector.
	vector<int> lv(10);

	// 18.2.3b. Copy the values from gv into lv.
	lv = v;

	// 18.2.3c. Print out the elements of lv.
	for (int i : lv)
		cout << i << endl;

	// 18.2.3d. Define a local vector<int> lv2; initialize it to be a copy of the argument vector
	vector<int> lv2 = v;

	// 18.2.3e. Print out the elements of lv2
	for (int i : lv2)
		cout << i << endl;
}

// function for 4b
int fac(int n) {
	return n > 1 ? n * (fac(n - 1)) : 1;
}

int main()
try {
	// 18.2.4a. Call f() with gv as its argument.
	f(gv);

	// 18.2.4b. Define a vector<int> vv, and initialize it with the first ten factorial values (1, 2*1,3*2*1, 4*3*2*1, etc.).
	vector<int> vv(10);
	for (int i = 0; i < 10; ++i)
		vv[i] = fac(i + 1);

	// 18.2.4c. Call f() with vv as its argument.
	f(vv);
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}