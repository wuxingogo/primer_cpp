
/*这个是检查系统类型长度的的程序*/
#include <iostream>
#include <climits>
int main(){
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	/*sizeof poerator yields size of type or of variable*/
	cout << "int is " << sizeof(int) << " bytes. " << endl;
	cout << "short is " << sizeof n_short << " bytes " << endl;
	cout << "long is " << sizeof n_long << " bytes " << endl;
	cout << "long long is " << sizeof n_llong << " bytes " << endl;
	cout << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " <<n_llong << endl;
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "BIts per byte = " << CHAR_BIT << endl;
	return 0;
}
