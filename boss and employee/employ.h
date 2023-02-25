#pragma once
#include <iostream>
#include<string>
using namespace std;
class Employ
{
public:
	string name;
	int sal;
public:
	void setEmp() {
		cout << "Input name employer:" << endl;
		cin>>name;
		cout << "Input salary employer:" << endl;
		cin>>sal;
		cout << "................................." << endl;
	}
	void getEmp() {
		cout << "Name employer: " << name << endl;
		cout << "Salary= " << sal << endl;
		cout << "................................" << endl;
	}
	Employ() {
		cout << "Employ create" << endl;
	}
	Employ(string name, int sal) {
		this->name = name;
		this->sal = sal;
	}
	~Employ() {
		cout << "Employ detele" << endl;
	}

};