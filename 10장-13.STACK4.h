// 10��-13.STACK4.H 10.4.2 template argument
// ������� ������ instance�� ���� �� �����Ǵ�
// stack�� �����ϱ� ���� template class�� interface
template <class T, int nEl = 50> class Stack{
    T data [nEl];
    int nElements;
public:
    Stack () : nElements (0) { }
    // stack�� ��Ҹ� �߰��Ѵ�.
    void Push (T elem);
    // stack���κ��� �� ��Ҹ� ��´�.
    T Pop ();
    // stack�� �ִ� ���� ��� ����
    int Number ();
    // stack�� ����ִ���?
    int Empty ();
    // stack�� ���ִ���?
    int Full ();
} ;