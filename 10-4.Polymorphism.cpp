//[�ǽ����� 10.2]
// 10-4.Polymorphism.cpp  10.3 ��Ӱ� polymorphism�� ����Ͽ� genericity ǥ��
/*
* ���� �迭�� ���� > ��Ʈ�� �迭�� ���� > ��ü �迭�� ���� > Person *data[]; �Ǵ� Person **data;�� ���� ������ �ʿ�
*/
#include <iostream>
using namespace std;
//genericity�� ǥ���ϴ� coding���� macro ��ü ȿ���� Ȯ��
/*
�ǽ� 2
 1) ����
  �� source code�� ����� ����Ͽ� �پ��� ������ Ÿ���� ��ü���� �ٷ�� ����� �˾ƺ��� ���̴�.
 2) ���
  ��. �� class���� ��� ���踦 Ȯ���غ���.
  ��. ���� ������ stack�� ���� �ٸ� class�� ��ü�� � ������� ����Ǵ��� Ȯ���غ���.
  ��. ���� ������ stack���� ���� �ٸ� class�� ��ü�� � ������� ��µǴ��� Ȯ���غ���.
  ��. �ּ�4�� ���� Stack.Pop()�� ������ �� type casting�� ���� ��� � ������ �߻��ϴ��� Ȯ���غ���.
*/
class GenericObject {};
class Stack {
	GenericObject* data[50];
	int nElements;
public:
	Stack() : nElements(0) {}
	//stack�� �� ��Ҹ� �߰�
	void Push(GenericObject* item);
	//stack���κ��� �� ��Ҹ� ����
	GenericObject* Pop();
	//stack�� ������ ����� ��� ����
	int Number();
	//stack�� �����?
	int Empty();
};

void Stack::Push(GenericObject* item) {
	data[nElements] = item;
	nElements++;
}
GenericObject* Stack::Pop() {
	nElements--;
	return data[nElements];
}
int Stack::Number() {
	return nElements;
}
int Stack::Empty() {
	return (nElements == 0);
}
//generic�� �����κ��� ������ ���� class�� ����
class IntObject : public GenericObject {
public:
	int data;
	IntObject(int num) : data(num) {}
};

class doubleObject : public GenericObject {
public:
	double data;
	doubleObject(double num) : data(num) {}
};

class floatObject : public GenericObject {
public:
	float data;
	floatObject(float num) : data(num) {}
};

void main() {
	//* �ּ� 1
	//generic stack�� ����
	Stack genericStack_1;

	genericStack_1.Push(new IntObject(500));
	genericStack_1.Push(new IntObject(1992));
	genericStack_1.Push(new IntObject(33));
	genericStack_1.Push(new IntObject(1024));
	//stack���� �ϳ��� �����鼭 ����Ѵ�.
	//Pop �Լ��� GenericObject�� ���� pointer�� return�ϱ� ������
	//�� ��ü�� �����ϱ� ���ؼ� Ÿ�� ��ȯ�� �ʿ��ϴ�.
	cout << "-----int type stack" << endl;
	while (!genericStack_1.Empty()) {
		cout << ((IntObject*)genericStack_1.Pop())->data << endl;
	}
	//*/
	  //main()���� �� �� �̻��� stack ������ �����ϴ�
	//* �ּ� 2
	Stack genericStack_2;
	genericStack_2.Push(new doubleObject(500.812));
	genericStack_2.Push(new doubleObject(1992.835));
	genericStack_2.Push(new doubleObject(33.877));
	genericStack_2.Push(new doubleObject(1024.809));

	cout << endl << "-----double type stack" << endl;
	while (!genericStack_2.Empty()) {
		cout << ((doubleObject*)genericStack_2.Pop())->data << endl;
	}
	// */

	 //* �ּ� 3
	Stack genericStack_3;
	genericStack_3.Push(new floatObject(500.887));
	genericStack_3.Push(new floatObject(1992.811));
	genericStack_3.Push(new floatObject(33.899));
	genericStack_3.Push(new IntObject(1024)); //type check�� ������� ����
	genericStack_3.Push(new floatObject(1024.851));
	// stack�� float�� double���� ���̴� ���� ���� ����� ����
	cout << endl << "-----float type stack" << endl;
	while (!genericStack_3.Empty()) {
		cout << ((floatObject*)genericStack_3.Pop())->data << endl;
	}
	//*/

	/* �ּ� 4
	cout<<endl<<"-----float type stack"<<endl;
	while(! genericStack_3.Empty()){
	  //���� �߻� Ȯ���ϰ� ������ code �ۼ��Ͽ� Ȯ��
	   cout << genericStack_3.Pop()->data << endl; //cout<<GenericObject;�� ���ǵ��� �ʾ���
	}
	*/
	system("pause");
}