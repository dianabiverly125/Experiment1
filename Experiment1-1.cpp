#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int box , sideline , premium , genad;

	cout << "Ticket Type" << "		" << "Ticket Price" << "		" << "Number of Tickets Sold" << endl;
	cout << "Box" << "			" << "250" << "				"; cin >> box; 
	cout << "Box Tickets Total: " << 250 * box << endl;
	cout << endl;
	cout << "Sideline" << "		" << "100" << "				"; cin >> sideline; 
	cout << "Sideline Tickets Total: " << 100 * sideline << endl;
	cout << endl;
	cout << "Premium" << "			" << "50" << "				"; cin >> premium; 
	cout << "Premium Tickets Total: " << 50 * premium <<  endl;
	cout << endl;
	cout << "General Admission" << "	" << "25" << "				"; cin >> genad; 
	cout << "General Admission Tickets Total: " << 25 * genad << endl;
	cout << endl;
	cout << endl;
	cout << "Total Sales Amount: " << (250 * box) + (100 * sideline) + (50 * premium) + (25 * genad) << endl;

	_getch();
	return 0;
}