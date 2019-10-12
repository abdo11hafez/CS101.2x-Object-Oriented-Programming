#include<iostream>
using namespace std;

int main()
{
	Rock r;
	Paper p;
	Scissors s;
	r.setPower(5);
	p.setPower(7);
	s.setPower(24);

	cout << r.battle(p) << p.battle(s) << s.battle(r) ;

    return 0;
}

