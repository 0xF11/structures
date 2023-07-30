#include <iostream>
#include <string>

struct player {
	std::string name;
	int age;
	bool doProgramming;
};


int main() {

	player p1;
	player p2;


	p1.name = "alice";
	p1.age = 20;
	p1.doProgramming = true;

	p2.name = "bob";
	p2.age = 18;
	p2.doProgramming = false;

	std::cout << p1.name << " (" << p1.age << ")" << std::endl;
	std::cout << p2.name << " (" << p2.age << ")" << std::endl;

}