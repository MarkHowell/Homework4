#include <iostream>>
#include <string>

void test_function(const List &current) {
	std::cout << "---- Test Function ----\n";
	List *b = new List(current);
	std::cout << "current = " << current << "\n"
		<< "b = " << *b << "\n";
	b->prepend(15);
	b->prepend(60);
	b->append(2);
	std::cout << "current = " << current << "\n"
		<< "b = " << *b << "\n";
	b->remove(1);
	std::cout << "current = " << current << "\n"
		<< "b = " << *b << "\n";
	List c;
	c.append(5);
	c.prepend(2);
	std::cout << "current = " << current << "\n"
		<< "b = " << *b << "\n"
		<< "c = " << c << "\n";
	c = *b;
	b->append(100);
	c.insert(1, 4);
	std::cout << "current = " << current << "\n"
		<< "b = " << *b << "\n"
		<< "c = " << c << "\n";
	delete b;
	std::cout << "current = " << current << "\n"
		<< "c = " << c << "\n";
	std::cout << "---- End Test Function ----\n";
}

class List {
public:
	void List::prepend(int) {};
	void List::append(int) {};
	void List::insert(int, int) {};
	void List::remove(int) {};


};



