//10��-15-5.TwoThings.cpp [PRATA2005] 10.4.5 ������ template ���
#include <iostream>
using namespace std;

template <class T>
class Stack {
	T data[50];
	int nElements;
	int top;
public:
	Stack() : nElements(10), top(0) { data[0] = (T)(0.0); }
	int Push(const T &elem);
	int Pop(T& x);
	int Number();
	int Empty();
};
template <class T>
int Stack<T>::Push(const T& elem)
{
	data[top++] = elem;
	cout << "Stack<T>::push() - elem = " << elem << endl;;
	return 1;
}
template <class T>
int Stack<T>::Pop(T& x)
{
	x = data[--top];
	cout << "Stack<T>::Pop()->x = " << x << endl;
	return x;
}
/*
template <typename Thing> �ε� �ٽ�
typename�� template <typename T > class�̶�� �ǹ���
*/
template <template <typename T> class Thing>
class TwoThings
{
private:
	Thing<int> s1;
	Thing<double> s2;
public:
	TwoThings() {};
	bool push(int a, double x) { return s1.Push(a) + s2.Push(x); }
	bool pop(int & a, double & x){ return s1.Pop(a) + s2.Pop(x); }
};
int main()
{
	TwoThings<Stack> tt;//Stack�� Thing���� match�ȴٴ� ������ �ؼ�
	int ni = 10;
	double nb = 1.23;
	cout << "ni(int) nb(double)" << endl;
	cin>> ni >> nb;
    tt.push(ni, nb);
    tt.pop(ni, nb);
	system("pause");
	return 0;
}