#include "10-24.COW_DOG.h"
// 10-13.COW_DOG.CPP  10.5.1 RunSpeaking �Լ��� �����
#include <iostream>
using namespace std;

Cow::Cow(Point p) :
	Animal(p) {}

void Cow::Speak() {
	MoveOutput();
	cout << "Cow::Speak() -> moo" << endl;
}

Dog::Dog(Point p) :
	Animal(p) {}

void Dog::Speak() {
	MoveOutput();
	cout << "Dog::Speak()->arf " << endl;
}
