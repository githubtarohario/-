#include<iostream>
using namespace std;
class Animal {
protected:
	int age = 10;
public:
	Animal(int a) {

		age = a;
		cout << age << "歳" << endl;
	}
	Animal():Animal(0) {
		cout << "Animal constructor" <<endl;
	}
	~Animal() {
		cout << "Animal デストラクター" << endl;

	}
	void intoro() {
		cout << "動物クラス　です" << endl;

	}
	void bark() {
		cout << "bark ";
	}



};
class Dog:public Animal {
public:
	Dog() {
		Animal::intoro();
		cout << "Dog コンストラクター" << endl;
	}
	~Dog() {
		cout << "Dog  デスストラクター" << endl;
	}
	void showdata() {
		cout << "年齢は" << age << endl;//継承してるのでage参照可能
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

