//10��-15-7.GoodsFriend.cpp [PRATA2005] 10.4.5 ������ template ���
#include <iostream>
using namespace std;

template <typename T> void showCounter();
template <typename T> void display(T &);

template <typename TT>
class Goods
{
private:
	TT item;
	static int counter;
public:
	Goods(const TT & i) : item(i) {counter++;}
	~Goods() { counter--; }
	friend void showCounter<TT>();//<TT>�� specialization�� ��Ÿ��
	friend void display<>(Goods<TT> &);//<>�� argument�� <TT>�� ����Ͽ��� ������
};

template <typename T>
int Goods<T>::counter = 0;

template <typename T>
void showCounter()
{
	cout <<"showCounter()::template showCounter():counter = " << Goods<T>::counter << endl;
}

template <typename T>
void display(T & x)
{
	cout << "display()::Goods<T>: T item = "<< x.item << endl;
}

int main()
{
	int n = 10;
	showCounter<int>();
	//display(n);//Goods<T>�� instance�� ��������� �ʾ� ���ȵ�
	Goods<int> gint1(33);
	Goods<int> gint2(99);
	Goods<double> gdbl(11.1);
	display(gint1); //template instance�� ���Ͽ� bound��
	display(gint2); //template instance�� ���Ͽ� bound��
	display(gdbl);//template instance�� ���Ͽ� bound��
	showCounter<int>();//template instance�� ���Ͽ� bound��
	showCounter<double>();//template instance�� ���Ͽ� bound��
	showCounter<float>();//template instance�� ���Ͽ� bound��
	system("pause");
	return 0;
}