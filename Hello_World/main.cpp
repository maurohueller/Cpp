#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

void read()		{std::cout << "read()\n";}
void sort()		{std::cout << "sort()\n";}
void compact()	{std::cout << "compact()\n";}
void write()	{std::cout << "write()\n";}


int main () {
//	vector<string> testo;
//	string testo;

	if (true) {
		std::cout << __FILE__ << std::endl;
		std::cout << __LINE__ << std::endl;
	}
		
	if (1)
		std::cout << "true!\n";
	
    read();
	sort();
	compact();
	write();
	
    return 0;
}
