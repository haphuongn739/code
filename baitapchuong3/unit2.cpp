/* Name : Nguyen Thi Ha Phuong
mssv:................
...
*/

#include <iostream>
using namespace std;

void main()
{
	//Khai bao bien
	int i =8;
	int j =5;
	float x =0.005;
	float y  = -0.01;
	char c ='c';
	char d ='d';

	//Nhap gia tri
	cout<< (3*i-2*j) % (2*d-c) <<endl;
	cout<< 2*((j/5) + (4 *(j-3)) % (i+j-2)) <<endl;
	cout<< ((++i / j++) == 1) <<endl;
	cout<< ((j>0) && (j<5) || (i>=j)) <<endl;	system ("pause");
}