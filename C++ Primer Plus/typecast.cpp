
/*这是一个强制类型转换的例子*/
#include <iostream>
int main(){
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99;
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks = " << auks << ",bats = " << bats;
	cout << ",coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is " ;
	cout << int(ch) << endl;
	cout << "Yes,the cod is ";
	cout << static_cast<int>(ch) << endl;

	/*static_cast<typeName>(value)这是因为C语言强制类型转换有过多可能性而及其危险,运算符static_cast<>比传统强制类型转换更严格.*/
}
