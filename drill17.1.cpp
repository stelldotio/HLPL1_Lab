#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "\n";
}

//1.2.1. Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array().
vector<int> v5(10);
int y = 100;
for (int i = 0; i < 10; ++i)
{
	v5[i] = y;
	++y;
}
print_vector(cout, v5);

vector<int> v6(11);
y = 100;
for (int i = 0; i < 11; ++i)
{
	v6[i] = y;
	++y;
}
print_vector(cout, v6);

vector<int> v8(20);
y = 100;
for (int i = 0; i < 20; ++i)
{
	v8[i] = y;
	++y;
}
print_vector(cout, v8);
return 0;
}
//1.2.1 Allocate an int, initialize it to 7, and assign its address to a variable p1.
int x = 7;
int* p1 = &x;

//1.2.2 Print out the value of p1 and of the int it points to.
cout << p1 << "  " << *p1 << endl;

//1.2.3 Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to avariable p2.
int* array = new int[7];
x = 1;
for (int i = 0; i < 7; ++i)
{
	array[i] = x;
	x *= 2;
}
int* p2 = array;

//1.2.4  Print out the value of p2 and of the array it points to.
print_array(cout, p2, 7);
cout << "p2: " << p2 << endl;

//1.2.5. Declare an int* called p3 and initialize it with p2
int* p3 = p2;

//1.2.6. Assign p1 to p2
p2 = p1;

//1.2.7. Assign p3 to p2
p2 = p3;

//1.2.8. Print out the values of p1 and p2 and of what they point to.
cout << p1 << *p1 << endl;
cout << p2 << *p2 << endl;

//1.2.10. Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.
p1 = new int[10]{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//1.2.11. Allocate an array of ten ints, and assign its address to a variable p2.
p2 = new int[10];

//1.2.12. Copy the values from the array pointed to by p1 into the array pointed to by p2.
for (int i = 0; i < 10; ++i)
	p2[i] = p1[i];

//1.2.13. Repeat 10-12 using a vector rather than an array

vector<int> v_p1{ 1,2,4,8,16,32,64,128,256,512 };
p1 = &v_p1[0];
print_vector(cout, v_tenin);
vector<int> v_p2{ 10,20,40,80,160,320,640,1280,2560,5120 };
p2 = &v_p2[0];
for (int i = 0; i < 10; ++i)
	p2[i] = p1[i];
print_vector(cout, v_p2);




catch (exception& e)
{
	cerr << "Exception! " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Some exceptions! " << endl;
	return 2;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
