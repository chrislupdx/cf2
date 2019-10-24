//County Fair Calculator 2
//County fair admissions calculator
//calculates a series of indivdual costs, and sums them into a group cost
//Chris Lu, 10/22/19
//Sources: None

#include <iostream>
#include <iomanip>

using namespace std;
int main(){

int customerAge, groupNumber;
double finalTotal, price, afterTaxes;
const int infantPrice = 1;

//loop checks prevents non-zero ages to be submitted 
do {
   cout << "admissions fair calculator" << endl;
   cout << "customer age?" << endl;
   cin >> customerAge;
   }
while (customerAge < 0);

//loop detirmines cost based on age
if (customerAge < 2)
{
	price = infantPrice;
	cout << "price for this person is " << price << endl;
}
//applies tax to calculated age

//appends cost to group

finalTotal = customerAge;
cout << "finalTotal is " << finalTotal << endl; 

return 0;

}
