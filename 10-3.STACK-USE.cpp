// 10-3.STA1-USE.CPP   10.2 macro�� genericity�� ǥ��
// class Stack�� instance ����
#include <iostream>
#include "10-1.STACK1.h" //macro ���
using namespace std;
// ���� stack ����
void main (){
    // main()���� �� ���� stack�� ���ÿ� ������� �ϴ� �ǽ�
    Stack intStack;
    // ���� stack�� �ִ´�.
    intStack.Push (500);
    intStack.Push (1992);
    intStack.Push (33);
    intStack.Push (1024);
	cout<<"Number of stack = "<<intStack.Number()<<endl;
    // stack�� ���鼭 ��Ҹ� ���
    // /*
    while (! intStack.Empty ())
        cout << intStack.Pop () << endl;
       // */
	if (intStack.Empty()) cout<<"Stack is Empty"<<endl;

    //���� stack�̹Ƿ� �Ǽ� �����Ͽ��� Pop()���� ������ ��ȯ�Ǵ� ������ �ִ�
    Stack floatStack;
    //#define Type float ���� ���� Ȯ��
    floatStack.Push(5.00);
    floatStack.Push(19.92);
    floatStack.Push(3.3);
    floatStack.Push(10.24);//�Է� ����?  ���� Ȯ�� �ʿ�
    cout << "Number of intstack = " << intStack.Number() << endl;
    cout << "Number of floatstack = " << floatStack.Number() << endl;
    // stack�� ���鼭 ��Ҹ� ���
    while (!floatStack.Empty())
        cout << floatStack.Pop() << endl; //int�� ��µȴ� 
    if (floatStack.Empty()) cout << "Stack is Empty" << endl;
	system("pause");
} 