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

//loop checks for customer age, using 0 as the escape condition 
do {
   cout << "admissions fair calculator" << endl;
   cout << "customer age?" << endl;
   cin >> customerAge;
}
while (customerAge != 0);


if ( customerAge < 2){
	price = 1;
}
else if (customerAge >= 2 && customerAge <= 10) {
	price = 10;
}
else if (customerAge >= 10 && customerAge <= 59){
	price = 20;
}
else if (customerAge >= 60){
	price = 20 * .9;
}
afterTaxes = (price * .07) + price;
cout << "this person costs " << afterTaxes << endl;
}

finalTotal = finalTotal + afterTaxes;
cout << "finaltotal is " << finalTotal << endl;

return 0;

}
