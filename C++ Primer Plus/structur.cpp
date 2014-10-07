
/*结构体的一个小例子*/
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audaciouts Arthur",
		3.12,
		32.99
	};
	cout << "Expand your guess list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $ ";
	cout << guest.price + pal.price << "!\n";
	
	return 0;
}

