#include <iostream>
using namespace std;
int main()
{
int z;
double x;
double y;
int on = 1;
char a;
char g;
char s;
double resistor_value;
while (on == 1)
{
cout << "**************COLOR CODE CHART********************";
cout << "\nblack = 0    (multiplier=1)\nbrown = 1   (multiplier=10)\nred = 2   (multiplier = 100)\norange = 3 (multiplier=1000)\nyellow = 4  (multiplier= 10000)\ngreen = 5   (multiplier=1000000)\nblue = 6\nviolet = 7 \ngrey = 8\nwhite = 9";
cout << "\n***************************************************";
cout << "\n \nThis program is used to calculate values of resistors. Please read the above chart and be sure to note the colors as well as the associated values. Note that resistor color codes are read left to right." << endl;
cout << "\nPlease type the two numbers associated with your resistor (**PLEASE NOTE**, that it is important not to use any spacing between the numbers. For example blue and red would be 62, not 6 2.) : ";
cin >> x;
if (x < 0)
{
  cout << "ERROR. It seems you've entered a negative number. Please try again.";
  break ;
}
cout <<"\n\n Now please enter the multiplier number associated with the third color on the resistor:  ";
cin >> y;
resistor_value = x * y;
cout << "Lastly, please state rather the last stripe on the resistor is gold or silver. In order to do this, type 'g' for gold and 's' for silver. ";
cin >> a;
if (a == g)
{
  cout << "\n\nThe resistor's value is " << resistor_value << " with a tolerance of 5%";
}
  
  else 
  {
     cout << "\n\nThe resistor's value is " << resistor_value << " ohms" <<" with a tolerance of 10%";
  }
on = 2  ;
}

return 0;
}