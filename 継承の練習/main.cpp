#include<iostream>
using namespace std;
class Animal {
protected:
	int age = 10;
public:
	Animal(int a) {

		age = a;
		cout << age << "��" << endl;
	}
	Animal():Animal(0) {
		cout << "Animal constructor" <<endl;
	}
	~Animal() {
		cout << "Animal �f�X�g���N�^�[" << endl;

	}
	void intoro() {
		cout << "�����N���X�@�ł�" << endl;

	}
	void bark() {
		cout << "bark ";
	}



};
class Dog:public Animal {
public:
	Dog() {
		Animal::intoro();
		cout << "Dog �R���X�g���N�^�[" << endl;
	}
	~Dog() {
		cout << "Dog  �f�X�X�g���N�^�[" << endl;
	}
	void showdata() {
		cout << "�N���" << age << endl;//�p�����Ă�̂�age�Q�Ɖ\
	}
	void bark() {

		cout << "WAN WAN"<< endl;
	}
	
};

void main() {
	//Dog d;
	//d.bark();
	Animal a;





}

