// 10-5.STACK2.CPP  10.3 ��Ӱ� polymorphism�� ����Ͽ� genericity ǥ��
#include "10-4.STACK2.H"
void Stack::Push(GenericObject* elem){
    data[nElements] = elem;
    nElements++;
}

GenericObject* Stack::Pop(){
    nElements--;
    return data[nElements];
}

int Stack::Number(){
    return nElements;
}

int Stack::Empty(){
    return (nElements==0);
}
