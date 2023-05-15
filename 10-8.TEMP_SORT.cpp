// 10-8.TEMP_SORT.CPP 10.5 template �Լ�
/*
�ǽ� 4
 1) ����
  �� source code�� template�� �̿��Ͽ� ������ Ÿ�Կ� �˸°� �������� ����Ǵ� ���� �˾ƺ��� ���� ���̴�.
 2) ���
  ��. sort()�� print()�� ����� ������ Ȯ���غ���.
  ��. print()�� sort()�� parameter�� arr2�� �ٲپ� �����غ��� template�� ��ɿ� ���� �˾ƺ���.
  ��. main() intarr�� ������ Ÿ�԰� ���Ҹ� �ٲپ�� sort()�� print()�� �ùٸ��� �����ϴ��� Ȯ���غ���.
*/
#include <iostream>
using namespace std;

template <class T>
void sort (T *ele, int num){
    // num���� Type ���� data[0]...data[num-1]�� ������������ �����Ѵ�.
    cout << "sort() ����" << endl << endl;
    for (int temp = 0; temp < num; temp++){
        int temp2 = temp;
        for (int temp3 = temp + 1; temp3 < num; temp3++)
            if (ele[temp3] < ele[temp2]){
                temp2 = temp3;
            }
        T arg = ele[temp]; 
        ele[temp] = ele[temp2]; 
        ele[temp2] = arg;
    }
}
template <class T>
void print (T *ele, int num){
    for(int i=0; i<num; i++){
        cout << ele[i] << " ";
    }
    cout << endl << endl;
}

void main (){
    //�ٸ� ������ Ÿ���� �迭�� �����غ��� sort()�� print()�� ������Ѻ���.
    int arr1[10] = {5, 6, 1, 7, 9, 3, 2, 0, 4, 8};
    float arr2[10] = {4.1, 1.2, 5.0, 6.3, 2.3, 0.4, 7.7, 8.5, 3.1, 9.0};
    char* name[10] = { "Kim" };
    //Person p[10];
    cout << "sort() ȣ�� �� " << endl;
    print(arr1, 10);
    sort(arr1, 10);
    cout << "sort() ȣ�� �� " << endl;
    print(arr1, 10);
    sort(arr2, 10);
    print(arr2, 10);
    sort(name, 10);//���� �����ϵ��� ��ġ�� ���� �ǽ��� ��
    //sort(p, 10);//���� �����ϵ��� ���� �ʿ�
        //arr2[]�� ���Ͽ� �ǽ� code �ۼ��Ͽ� ���� Ȯ��
    //��good��, ��nice�� ���� string�� �迭�� ������ �Ŀ� sort()�Լ� ȣ��, sort()�� �ȵǴ� ���� �ذ��� ���� operator>()�Լ� �������ϴ� code �ۼ�
    /*
    //class Number�� ���Ͽ� �ǽ�
    Number n[10] = {....};
    sort(n, 10);
    */
    system("pause");
}