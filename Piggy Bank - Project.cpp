/*
Question 1
First things first, let’s declare three variables:

pesos for Pesos
reais for Reais
soles for Soles

Question 2
You’ll need another variable to store the amount you have in dollars.
Let’s declare a variable called dollars.

Question 3
Compile and execute the code to make sure it’s bug-free before moving on!

Question 4
You’ll want to ask the user the first question:
"Enter number of Colombian Pesos:"

Question 5
You then want the user to type in how much they have and store it in pesos

Question 6
Do this for the other two currencies.

Question 7
Google the conversion rates:

from Pesos to USD
from Reais to USD
from Soles to USD
And write them down in your code using a comment.
1 Peso = 0.048 USD
1 Reais = 0.18 USD
1 Soles = 0.27 USD

Question 8
Write an equation that solves for the total USD.
This will look something like:
dollars = (conversion_rate1 * currency1) + (conversion_rate2 * currency2) + (conversion_rate3 * currency3)

Question 9
Display the total amount of USD. Your final output should look like:
US Dollars = $

Bash:
$ g++ currency.cpp
$ ./a.out
  Enter number of Columbian Pesos: 12
  Enter number of Brazilian Reais: 12
  Enter number of Peruvian Soles: 12
US Dollars = $5.976

*/

#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;
  
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (0.048 * pesos) + (0.18 * reais) + (0.27 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";

}












