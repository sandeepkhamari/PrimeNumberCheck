#include <iostream>
#include "prime_check.hpp"

int main()
{
  prime_number pnum;
  int num= 17;
  bool res= pnum.is_prime(num);
  res ? std::cout<<num<<" is a prime number." :
	  std::cout<<num<<" is not a prime number.";
  return 0;
}
