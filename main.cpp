// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string in;
  double temperature;
  cout << "Please enter a temperature in Fahrenheit. ";
  getline (std::cin, in);
  temperature = (stof(in) - 32) * 5 / 9;
  cout << "Converted to Celsius, this temperature is " << temperature << " C\n";
}
