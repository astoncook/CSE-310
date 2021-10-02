#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main () {

//makes class for the item and the price of that item
	struct cartType
	{
		string item;
		double price;
		
	};

//more varribles for the item counter, cart total, adding an item, and if the yes or no question is correct
	cartType cart[45];
	int counter = 0;
	double carttotal;
	char additem;
	char correct;
	
//introduction commets
	cout << "Hello, Welcome to the shopping cart." << endl;
	cout << "The shopping cart will add up all of your items and give you the total when done." << endl;
	
	
	while (additem != 'N' || additem != 'n')
	{	
		//name of item, adds to list
		cout <<	"What is the name of your item you wish to add to your cart? ";
		cin >> cart[counter].item;
		//price of item, adds to cart total
		cout << "What is the price of your item you wish to add to your cart? (ex. 3.26 = $3.26) ";
		cin >> cart[counter].price;
		//displays the price entered in the last step
		cout << "Your item price is: ";
		cout << fixed << showpoint << setprecision(2);
		cout << cart[counter].item << " at $" << cart[counter].price << endl;
		//checks using the correct char at the start of the program if the user put in the correct price
		cout << "Is this correct?  y/n ";
		cin >> correct;
	if (correct == 'y' || correct == 'Y')
	{
	//if correct adds to the cart total
	carttotal = carttotal + cart[counter].price;
	counter++;}
	else {
		//commets for if the user types "n" to not add the item to the cart
		cout << "That item was not saved." << endl;
	}	//cart total from all of the items
		cout << "Your current cart total is: " << carttotal << endl;

		//asks user for input on more items or not. If so it adds items throughout the process again
		cout << "Do you wish to add more items? y/n? ";
		cin >> additem;
		
	
	}	 
    return 0;
}