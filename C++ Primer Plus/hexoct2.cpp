/*这是一个利用c++里转换进制的程序*/
#include <iostream>
using namespace std;
int main(){
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << "(decimal for 42)" << endl;
	cout << hex;	// manipulator for changing number base
	cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
	cout << oct;	// manipulator for changing nuber base
	cout << "inseam = " << inseam << "(octal for 42)" << endl;
	
	/*如果要使用十六进制或者八进制显示方式,可以使用cout一些特性*/
	/*dec,hex和oct分别用于指示以十进制,十六进制和八进制显示整数*/
	/*一旦更改,格式将一直有效*/
	return 0;

}
