// 10��-4.STACK2.H 10.3 ��Ӱ� polymorphism�� ����Ͽ� genericity ǥ��
// class GenericObject ��ü���� generic stack�� interface
// stack�� 50���� pointer �迭�� �̷����
// generic ��ü���� ���� class�� �����Ѵ�.
class GenericObject
{ } ;

class Stack{
    GenericObject * data [50];
    int nElements;
public:
    Stack () :
    nElements (0)
    { }
    // stack�� �� ��Ҹ� �߰�
    void Push (GenericObject * elem);
    // stack���κ��� �� ��Ҹ� ����
    GenericObject * Pop ();
    // stack�� ������ ����� ��� ����
    int Number ();
    // stack�� �����?
    int Empty ();
 };