// 10-2.STACK1.CPP   10.2 macro�� genericity�� ǥ��
//generic class Stack�� member �Լ� ����
#include "10-1.STACK1.h"
void Stack :: Push (TYPE elem){
    data [nElements] = elem;
    nElements ++;
}

TYPE Stack :: Pop (){
    nElements --;
    return data [nElements];
}

int Stack :: Number (){
    return nElements;
}

int Stack :: Empty (){
    return (nElements == 0);
} 

