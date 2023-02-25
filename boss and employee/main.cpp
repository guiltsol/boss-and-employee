#include "boss.h"
int main() {
	cout << "Employer///////////" << endl;
	Employ a, b("Max", 60000);
	a.setEmp();
	a.getEmp();
	b.getEmp();
	cout << "Boss//////////////////" << endl;
	Boss z, k("Jin",30000,5000);
	z.setBoss();
	z.getBoss();
	k.getBoss();
	return 0;
}