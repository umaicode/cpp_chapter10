// 10��-1 STACK1.H   10.2 macro�� genericity�� ǥ��
// generic ��ü��� ������ class Stack�� ���� ��ü�� ��ó���⿡ ���� TYPE�� macro ���� �� �ۼ��� �������� ġȯ�� �� �����ȴ�.
#define TYPE int
class Stack {
    TYPE data[50];
    int nElements;
public:
    Stack() : nElements(0) { for (int i = 0; i < 50; i++) data[i] = 0; }
    // �� ��Ҹ� stack�� �߰�
    void Push(TYPE elem);
    // stack���κ��� �� ��Ҹ� ����
    TYPE Pop();
    // stack�� �ִ� ���� ����� ��
    int Number();
    // stack�� �����?
    int Empty();
};