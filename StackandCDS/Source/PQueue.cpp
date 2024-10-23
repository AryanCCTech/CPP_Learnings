#include "PQueue.h"

void Pqueue::get_priority()
{
	priority_queue<int, vector<int>, greater<int> > PQ;
	PQ.push(2);
	PQ.push(4);
	PQ.push(5);
	PQ.push(1);
	PQ.push(3);
	int arr[] = {2,4,5,1,3};
	cout << "Elements in Priority Queue are : ";
	for (auto i : arr) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Priority of elemensts in reverse order are :";
	while (!PQ.empty()) {
		cout << ' ' << PQ.top();
		PQ.pop();
	}
	cout << '\n';
}
