
#include <iostream>
using namespace std;

int main() {

	bool T {true};
	bool F {false};

	cout << (T && T && F && T) << '\n';
	cout << (T && T && F && T || T && T) << '\n';
	cout << (T && T && T && T || T && (T || F)) << '\n';
	cout << (T && T && T || T && (F || (T && (T && T)))) << '\n';
	cout << (T && T || T && F && T || T && T && F || (T && (T || F))) << '\n';
	cout << (T && T || T && F && T || (T && T && F || (T && (T || F)))) << '\n';
	cout << ((T && T || T && F && T || T) && T && F || (T && (T || F))) << '\n';
	cout << (T && T || T && (F && T || T && T) && F || (T && (T || F))) << '\n';

	return 0;
}