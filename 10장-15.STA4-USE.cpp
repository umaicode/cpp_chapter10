// 10��-15.STA4-USE.CPP  10.4.2 template argument
// default ũ�⸦ ���� template class Stack��  instance ��
//#include "10��-13.STACK4.h" //vosual stuio ���� ����
#include "10��-14.STACK4.cpp" //header file ���ÿ� cpp�� include�Ѵ�
#include <iostream>
using namespace std;
void main (){
	// ���� stack�� ����(default�� ũ�⸦ ����)
    Stack <int> intStack;
	// double �������� ���� stack�� ����
    Stack <double, 4> miniStack;
	intStack.Push(10);
	miniStack.Push(1.234);
	intStack.Pop();
	miniStack.Pop();
	system("pause");
}