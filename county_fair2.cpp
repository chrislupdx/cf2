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


return 0;

}
