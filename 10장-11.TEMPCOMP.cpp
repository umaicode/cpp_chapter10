// 10��-11.TEMPCOMP.CPP   10.4.1 Ÿ�� ȣȯ�� ����
// template ȣȯ�� ��Ģ�� �����ִ� program
// �ϳ��� ��Ҹ� �����ϴ� �ܼ� template class�� ����
#include <iostream>
using namespace std;
template <class T> class Single{
    T data;

public:
    Single ()
    { }

    void Set (T el){
        data = el;
    }
    T Get (){
        return data;
    }
} ;

void main(){
    // � template class�� instance Ÿ���� ����
    Single <int> oneInt;
    oneInt.Set (5);
    Single <float> oneFloat;
    oneFloat.Set (4.9);
    Single <int> secondInt;
    secondInt.Set (8);
    // template class�� instance�� ���� ġȯ�� Ÿ�� ȣȯ�̸� �����ϴ�
    // �ùٸ���
    oneInt = secondInt;
    // Ʋ����
    //oneInt = oneFloat; //�ٸ� type
	system("pause");
}