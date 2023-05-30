// 10-8.TEMP_SORT.CPP 10.5 template 함수
/*
실습 4
 1) 내용
  본 source code는 template을 이용하여 데이터 타입에 알맞게 동적으로 변경되는 것을 알아보기 위한 것이다.
 2) 방법
  가. sort()와 print()의 선언과 구현을 확인해보자.
  나. print()와 sort()의 parameter를 arr2로 바꾸어 실행해보고 template의 기능에 대해 알아보자.
  다. main() intarr의 데이터 타입과 원소를 바꾸어보고 sort()와 print()가 올바르게 동작하는지 확인해보자.
*/
#include <iostream>
#include <string>
using namespace std;

template <class T>
void sort(T* ele, int num) {
	// num개의 Type 원소 data[0]...data[num-1]을 오름차순으로 정렬한다.
	// char* 형식을 main에서 선언했을 때, T = char*이라면 함수 선언할 때, T* ele -> char** ele, char* ele[] 이렇게 되어야 한다.
	cout << "sort() 수행" << endl << endl;
	for (int temp = 0; temp < num; temp++) {
		int temp2 = temp;
		for (int temp3 = temp + 1; temp3 < num; temp3++)
			// "hong", "kim" 비교가 안됨. -> char* 이어서
			if (ele[temp3] < ele[temp2]) {
				temp2 = temp3;
			}
		T arg = ele[temp];
		ele[temp] = ele[temp2];
		ele[temp2] = arg;
	}
}
template <class T>
void print(T* ele, int num) {
	for (int i = 0; i < num; i++) {
		cout << ele[i] << " ";
	}
	cout << endl << endl;
}


class Number {
	double num;
public:
	Number(double num2) : num(num2) { }
	double Value() {
		return num;
	}

	bool operator < (Number numBer2) {
		return num < numBer2.Value();
	}

	friend ostream& operator<< (ostream& os, Number&);

};

ostream& operator<< (ostream& os, Number& num) {
	os << num.num;
	return os;
}

void main() {
	//다른 데이터 타입의 배열을 선언해보고 sort()와 print()를 실행시켜보자.
	int arr1[10] = { 5, 6, 1, 7, 9, 3, 2, 0, 4, 8 };
	float arr2[10] = { 4.1, 1.2, 5.0, 6.3, 2.3, 0.4, 7.7, 8.5, 3.1, 9.0 };
	// char* name[10] = { "Kim", "Choi", "Park", "Lee", "Jo", "Yang", "Shin", "Hong", "Kang", "Song" };
	string name[10] = { "Kim", "Choi", "Park", "Lee", "Jo", "Yang", "Shin", "Hong", "Kang", "Song" };
	Number data[10] = { Number(1.1), Number(1.8), Number(3.1), Number(4.1), Number(5.1), Number(6.3), Number(7.7), Number(8.1), Number(1.8), Number(9.1) };
	//Person p[10];
	cout << "sort() 호출 전 " << endl;
	print(arr1, 10);
	sort(arr1, 10);
	cout << "sort() 호출 후 " << endl;
	print(arr1, 10);
	sort(arr2, 10);
	print(arr2, 10);
	sort(name, 10);//동작 가능하도록 고치는 것을 실습할 것
	print(name, 10);
	sort(data, 10);
	print(data, 10);
	//sort(p, 10);//동작 가능하도록 수정 필요
		//arr2[]에 대하여 실습 code 작성하여 실행 확인
	//“good”, “nice” 등의 string을 배열로 선언한 후에 sort()함수 호출, sort()가 안되는 문제 해결을 위한 operator>()함수 재정의하는 code 작성
	/*
	//class Number에 대하여 실습
	Number n[10] = {....};
	sort(n, 10);
	*/
	system("pause");
}