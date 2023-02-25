#pragma once
#include "employ.h"
class Boss:public Employ
{
private:
	int bonus;
public:
	void setBoss() {
		cout << "Input name boss:" << endl;
		cin >> name;
		cout << "Input salary boss:" << endl;
		cin>>sal;
		cout << "Input bonus boss:" << endl;
		cin >> bonus;
	}
	void getBoss() {
		cout << "Boss name: " << name<<endl;
		cout << "Boss salary: " << sal << endl;
		cout << "Bonus= " << bonus << endl;
		cout << "Total salary= " << sal + bonus << endl;
		cout << "..........................." << endl;
	}
	Boss() {
		cout << "Boss create" << endl;
	}
	Boss(string name,int sal, int bonus):Employ(name,sal) {
		this->bonus = bonus;
	}
	~Boss() {
		cout << "Boss detele" << endl;
	}

};