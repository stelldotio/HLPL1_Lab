#include "std_lib_facilities.h"

//17.1.4. Write a function print_array10(ostream& os, int* a) that prints out the values of a(assumed to have ten elements) to os.
void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << "\n";
}
//7. Write a function print_array(ostream& os, int* a, int n) that prints out the values of a(assumed to have n elements) to os.
void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "\n";
}

int main()
try {

	//17.1.1 Allocate an array of ten ints on the free store using new.
	int* a = new int[20];
	//17.1.2 Print the values of the ten ints to cout.
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << ": " << a[i] << endl;
	//17.1.3. Deallocate the array(using delete[]).
	delete[] a;
	//17.1.5. Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.
	int* a2 = new int[10];
	int x = 100;
	for (int i = 0; i < 10; ++i)
	{
		a2[i] = x;
		++x;
	}
	print_array10(cout, a2);
	delete[] a2;
	// 17.1.6. Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
	int* a3 = new int[11];
	for (int i = 0; i < 11; ++i)
		a3[i] = 100 + i;
	print_array(cout, a3, 11);
	cout << a3[11] << endl;
	delete[] a3;

	int* a4 = new int[20];
	x = 100;
	for (int i = 0; i < 20; ++i)
	{
		a4[i] = x;
		++x;
	}
	print_array(cout, a4, 20);
	delete[] a4;

}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}