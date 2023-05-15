// 10��-7.STACK3.H  10.4 template class
// stack�� �����ϴ� template class�� interface
// ���� code�� �տ��� �ۼ��� macro version�� ����� �̿��� version�� �����ϴ�
template <class T>
class Stack{
    T data [50];
    int nElements;
public:
    Stack () : nElements (0)  { }
    // stack�� �� ��Ҹ� �߰��Ѵ�.
    void Push (T elem);
    // stack���κ��� �� ��Ҹ� ��´�.
    T Pop ();
    // stack�� ����Ǿ� �ִ� ��� ����
    int Number ();
    // stack�� ����ִ°�?
    int Empty ();
};