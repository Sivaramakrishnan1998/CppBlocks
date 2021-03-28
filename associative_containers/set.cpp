#include<iostream>
#include<set>
using namespace std;

template <class T>
void print(T begind) {

	for(auto no: begind) {
		cout << no << '\n';
	}
}

int main() {
	
	set<int> s;
	s.insert(10);
	s.insert(7);
	s.insert(10);
	s.insert(71);
	s.insert(17);
	s.insert(8);

	s.erase(8);

	// search
	auto f = s.find(17);

	if (f!=s.end()) {
		cout << "17 exists \n";
	}
	
	print(s);

	return 0;
}
