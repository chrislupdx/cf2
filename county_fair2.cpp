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
double groupCost, price, afterTaxes;
const int infantPrice = 1;
const int childPrice = 10;
const int adultPrice = 20;
const double seniorPrice = adultPrice * .9;
const double taxModifier = .07; 
//continue to loop through ages, append that to groupcost, stop when 0
do {

//loop checks prevents non-zero ages to be submitted 
do {
   cout << "admissions fair calculator" << endl;
   cout << "customer age?" << endl;
   cin >> customerAge;
   }
while (customerAge < 0);

//this elif loop detirmines cost based on age
//we want an if customerAge < 1 price = 0
if (customerAge == 0)
{
	price = 0;
	cout << "hit a 0, price for 0 is " << price << endl;
}
else if (customerAge < 2 && customerAge > 0)
{
	price = infantPrice;
	cout << "price for this baby is " << price << endl;
}
else if (customerAge >= 2 && customerAge <= 9)
{
	price = childPrice;
	cout << "price for this child is " << price << endl;
}
else if (customerAge >= 10 && customerAge <= 59)
{
	price = adultPrice;
	cout << "price for this adult is " << price << endl;
}
else if (customerAge >= 60)
{
	price = seniorPrice;
	cout << "price for this senior is " << price << endl;
}
	cout << "price for this person is " << price << endl;

//appends cost to group
groupCost = groupCost + price;
cout << "groupCost is " << groupCost << endl; 
}
while (customerAge != 0);


afterTaxes = (groupCost * taxModifier) + groupCost;
cout << "final cost with taxes is " << afterTaxes << endl;
return 0;

}
