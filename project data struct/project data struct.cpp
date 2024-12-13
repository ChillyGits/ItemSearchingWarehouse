#include <iostream>
using namespace std;
struct Item
{
	string name, sku;
	Item* next;
};

Item* head = NULL; //initial condition of head

void addItem(string nm,string s) 
{
	Item* newItem = new Item;
	newItem->name = nm;
	newItem->sku = s;

	Item* last = head; //keeps track of last item

	if (head == NULL)
	{
		head = newItem;
		newItem->next = NULL;
	}
	else
	{
		last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newItem;
		newItem->next = NULL;
	}
}
int itemSearchName()
{

}



int main()
{
	cout<<"Good"
}