/*简易操作字符的程序*/
#include <iostream>
int main(){
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code : " << endl;
	ch = ch + 1;	// chage character code in ch
	i = ch;			// save new charter code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;
	//using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch) : ";
	cout.put(ch);
	//using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;
	return 0;
}
/*cout.put()调用了类ostream的成员函数put(),用来输出字符,他把字符压入了ostream输出流中*/
