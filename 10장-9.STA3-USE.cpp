// 10��-9.STA3-USE.CPP  10.4 template class
// Stack class�� �� ��ʸ� ���� ����
#include <iostream>
//#include "10��-7.Stack3.h"
#include "10��-8.STACK3.CPP" // Visual Studio���� template ���ÿ� cpp�� ���� include, header�� ������� �ʾƾ� ��
using namespace std;

void main(){
    // ���� stack�� ����
    Stack <int> intStack;
    intStack.Push (500);
    intStack.Push (1992);
    intStack.Push (33);
    intStack.Push (1024);
    Stack<float> fstack;
    // stack���� �ϳ��� �����鼭 ���� ����Ѵ�.
    while (! intStack.Empty ()){
            cout << intStack.Pop () << endl;
	}
	system("pause");
}