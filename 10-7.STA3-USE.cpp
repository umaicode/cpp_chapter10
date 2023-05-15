// 10-7.STA3-USE.CPP   10.4.3 template�� �̿��� Container class ǥ��
#include "10-6.STACK3.CPP" ////Visual Studio�� template ���ÿ� .cpp�� include�ϰ� ��� ���-���
//#include "10-6.STACK3.h" //Visual Studio�� template ���ÿ� header file��  include�ÿ� ���� �߻��ϰ� ��
//Visual Studio�� template ���ÿ� header file�� ������� �ʾƾ� link ������ �ذ�
/*
�ǽ� 3
 1) ����
  �� source code�� template�� �̿��Ͽ� �� class�� ���� ���� ������ Ÿ���� ��ü�� �ٷ�� ����� �˾ƺ��� ���̴�.
 2) ���
  ��. class Stack�� ����� �� �Լ��� ������ Ȯ���غ���.
  ��. ���� ������ stack�� ���� �ٸ� class�� ��ü�� � ������� ����Ǵ����� ���ؼ� template�� ���信 ���� �����غ���.
  ��. ���� ������ stack���� ���� �ٸ� class�� ��ü�� � ������� ��µǴ����� ���ؼ� template�� ���信 ���� �����غ���.
*/
#include <iostream>
#include <string>
using namespace std;

void main(){
    //int�� stack�� ����
    Stack <int> intStack;
    //intStack.Push(n); �������� Ȯ��? �����ϰ� �Ϸ��� �ʿ��� code��?
    intStack.Push(50);
    intStack.Push(19);
    intStack.Push(3);
    intStack.Push(10);
    intStack.Push('aa');//�Է� ����
    //stack���� �ϳ��� �����鼭 ���� ����Ѵ�.
    cout<<"-----int type stack"<<endl;
    while(! intStack.Empty()){
        cout<< intStack.Pop() << endl;
    }
    //double stack������
    Stack <double> doubleStack;
    //stack�� ���� �߰��Ѵ�.
    doubleStack.Push(500.8);
    doubleStack.Push(1992.8);
    doubleStack.Push(33.8);
    doubleStack.Push(1024.8);
    //stack���� �ϳ��� �����鼭 ���� ����Ѵ�.
    cout<<"-----double type stack"<<endl;
    while(! doubleStack.Empty()){
        cout<< doubleStack.Pop() << endl;
    }
    //String stack������
    Stack <string> stringStack;

    stringStack.Push("500");
    stringStack.Push("1992");
    stringStack.Push("33");
    stringStack.Push("1024");
    stringStack.Push(50);//�ٸ� Ÿ�Կ� ���Ͽ� push ���� ���θ� �ǽ�
    //stack���� �ϳ��� �����鼭 ���� ����Ѵ�.
    cout<<"-----string type stack"<<endl;
    while(! stringStack.Empty()){
        cout << stringStack.Pop() << endl;
    }
	system("pause");
}