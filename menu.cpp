#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

void cheezmenu(void);
void ramenmenu(void);
void drinkmenu(void);
void specialmenu(void);
void dessertmenu(void);

int main()
{
	
	char exit = 'x';
	double total = 0;
	
	cheezmenu();
	ramenmenu();
	drinkmenu();
	specialmenu();
	dessertmenu();
	
	
	
	system("pause");
	return 0;
}
void cheezmenu(void)
{
cout << "     SELECTION			      NUMBER		PRICE" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
cout << "   S Cheezballs				01		$2.00" << endl;
cout << "   M Cheezballs				02		$3.00" << endl;
cout << "   L Cheezballs				03		$4.00" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
cout << "   S Pepperoni Cheezballs		04		$2.25" << endl;
cout << "   M Pepperoni Cheezballs		05		$3.50" << endl;
cout << "   L Pepperoni Cheezballs		06		$4.75" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
cout << "   S Cajun Cheezballs			07		$2.25" << endl;
cout << "   M Cajun Cheezballs			08		$3.50" << endl;
cout << "   L Cajun Cheezballs			09		$4.75" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
cout << "   S Dill Pickle Cheezballs		10		$2.25" << endl;
cout << "   M Dill Pickle Cheezballs		11		$3.50" << endl;
cout << "   L Dill Pickle Cheezballs		12		$4.75" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
cout << "   S Chicken and Waffles Cheezballs	13		$2.25" << endl;
cout << "   M Chicken and Waffles Cheezballs	14		$3.50" << endl;
cout << "   L Chicken and Waffles Cheezballs	15		$4.75" << endl;
cout << setfill('-') << setw(80) << "-" << endl;
}

void ramenmenu(void)
{
cout << "Chicken Ramen - 20" << endl;
cout << "Beef Ramen - 21" << endl;
cout << "Shrimp Ramen - 22" << endl;
cout << "Cheezi Ramen - 23" << endl;
cout << "Cajun Ramen - 24" << endl;
cout << "Dill Pickle Ramen - 25" << endl;
}

void drinkmenu(void)
{
cout << "Cheez Juice - 30" << endl;
cout << "Chicken Ramen Juice - 31" << endl;
cout << "1% Milk - 32" << endl;
cout << "2% Milk - 33" << endl;
cout << "Whole Milk - 34" << endl;
cout << "Dr. Pepper - 35" << endl;
cout << "Bepis - 36" << endl;
cout << "Pepsi - 37" << endl;

}

void specialmenu(void)
{
cout << "XXXL Cheez Ball Ramen Wrap - 40" << endl;
cout << "Cheez Ball 18in Pizza - 41" << endl;
cout << "Spaghetti and Cheezballs - 42" << endl;
}

void dessertmenu(void)
{
cout << "Cake Ramen - 50" << endl;
cout << "Cheezcake Ball - 51" << endl;
cout << "Birthday Cake Cheezball - 52" << endl;
cout << "Cheezi Cupcake - 53" << endl;
}
