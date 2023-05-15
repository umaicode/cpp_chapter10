// 10��-12.TYPE-ERR.CPP   10.4.1 Ÿ�� ȣȯ�� ����
// Ÿ�� parameter������ error�� ȥ���� �ִ� error �޽����� ��� ����� ���� �����ִ� ����
// ���� ���ü��� �����ϴ� class�μ� ���� ������ ������ class�� �����Ѵ�.
#include <iostream>
using namespace std;
template <class T>
class OrdSingle{
    T data;
public:
    OrdSingle (int i = 0):data(i)  { }
    void Set (T el){
        data = el;
    }

    T Get (){
        return data;
    }

    bool operator > (int value){
		cout<<"OrdSingle::operator >() is called"<<endl;
        return (data > value);
    }
} ;
// ���� class�� �����Ѵ�.
class Number{
public:
    int num;
	Number(int a): num(a) {}
    //*
	bool operator > (int k) {//�ּ� ó���ÿ� ������ ���� code�� Ȯ���ϴ� �ǽ� �ʿ�
		cout<<"Number::operator >() is called"<<endl;
		return (num > k);
    }
    //*/
};
void main (){
    // �� ���� ��ü���� �����.
    OrdSingle <int> os1;
	Number n1(4);
    OrdSingle <Number> os2;
	os1.Set(10); 
	//Number n1(4);
	os2.Set(n1);
    if(os1 > 5)
        printf("\t os2 = %d\n",os1);
    if(os2 > 5)
        printf("\tos2 = %d\n",os2);
	system("pause");
}