#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
	LinkedList<int> *list = new LinkedList<int>;
	list->push_back(1);
	list->push_back(2);
	list->push_back(3);
	list->push_back(4);
	
	list->show();

	return 0;
}
