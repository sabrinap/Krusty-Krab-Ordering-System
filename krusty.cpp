/* Name: Sabrina Pinera
Date: 10/1/2018
Section: 5
Assignment: 3
Due Date: 10/1/2018
About this project: Krusty Krabs Order. Have user place their order and then calculate
a receipt
Assumptions: The program will execute as intended.

All work below was performed by Sabrina Pinera */
#include <iostream>
#include <iomanip>

using namespace std;

//Initialize the menu function to call later.
void menu ();

int main ()
{
  //Constant prices for food in menu.
  const double K_PATTY = 3.50;
  const double B_FRIES = 1.50;
  const double K_SHAKE = 1.00;
  const double KK_PIZZA = 5.00;
  //Variables used to calculate total
  int qty, qty_1 = 0, qty_2 = 0, qty_3 = 0, qty_4 = 0;
  double patty, fries, shake, pizza;
  double total, order, order_1 = 0, order_2 = 0, order_3 = 0, order_4 = 0;

  //Statment stays outside of loop since only called once in the beginning
  cout << "Welcome to the Krusty Krab!\n";
do
{
      //function being called displays menu.
      menu ();

      cout << "\n\nWhat would you like? (Enter 0 to finish order!): ";
      cin >> order;

      //Ask user for input on item and the quantity.
      if (order == 1)
	{
	  cout << "How many krabby Patties would you like: ";
	  cin >> qty_1;
	  //loop for negative in the quantity
	  while (qty_1 <= -1)
	    {
	      cout << "You can't order a negative amount of food!\n";
	      cout << "try again: ";
	      cin >> qty_1;
	    }
	  //Smaller calculations to create an easier calculation for the total.
	   patty = (patty + qty_1);
	   order_1 = (K_PATTY * patty);
	}
      if (order == 2)
	{
	  cout << "How many barnicle fries would you like: ";
	  cin >> qty_2;
	  //loop for negative in the quantity
	  while (qty_2 <= -1)
	    {
	      cout << "You can't order a negative amount of food!\n";
	      cout << "try again: ";
	      cin >> qty_2;
	    }
	  fries = (fries + qty_2);
	  order_2 = (B_FRIES * fries);
	}
      if (order == 3)
	{
	  cout << "How many kelp shakes would you like: ";
	  cin >> qty_3;
	  //loop for negative in the quantity
	  while (qty_3 <= -1)
	    {
	      cout << "You can't order a negative amount of food!\n";
	      cout << "try again: ";
	      cin >> qty_3;
	    }
	  shake = (shake + qty_3);
	  order_3 = (K_SHAKE * shake);
	}
      if (order == 4)
	{
	  cout << "How many krust krab pizzas would you like: ";
	  cin >> qty_4;
	  //loop for negative in the quantity
	  while (qty_4 <= -1)
	    {
	      cout << "You can't order a negative amount of food!\n";
	      cout << "try again: ";
	      cin >> qty_4;
	    }
	  pizza = (pizza + qty_4);
	  order_4 = (KK_PIZZA * pizza);
	}
      if (order <= -1 || order >= 5)
	{
	  cout << "That isn't on the menu! Try again.\n";
	}
  //loop ensure that order is done when 0 is input at the end.
} while (order != 0);

    //Calculation
    total = ((order_1) + (order_2) + (order_3) + (order_4));

    //When user first inputs 0 without order it will execute this statement.
    //Not working the way I want it to.
    /*if (qty_1 == 0)
      //{
	    //cout << "Guess you arent hungry\n";
      }
     */
     cout << "\nYour order:\n";
    //Final output with order and total is displayed
        if (qty_1 >= 1)
        {
            cout << patty << " krabby Patties.\n";
        }
        if (qty_2 >= 1)
        {
	        cout << fries << " barnicle fries.\n";
        }
        if (qty_3 >= 1)
        {
	        cout << shake << " kelp shake.\n";
        }
        if (qty_4 >= 1)
        {
	        cout << pizza << " krust krab pizza.\n";
        }

            cout << fixed << setprecision(2);
            cout << "\nYour total is $" << total;
            cout << "\nEnjoy the food!\n";

  return 0;
}

//menu is void to print text on int main.
void menu ()
{
  cout << "\n----------- Menu -----------";
  cout << "\n1. Krabby Patty ...... $3.50";
  cout << "\n2. Barnicle Fries .... $1.50";
  cout << "\n3. Kelp Shake ........ $1.00";
  cout << "\n4. Krusty Krab Pizza . $5.00";
}
