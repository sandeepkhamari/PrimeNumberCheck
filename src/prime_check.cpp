#include "prime_check.hpp"

bool prime_number::is_prime(int number)
{
   if(number==1  || number==0)
   {
      return false;
   }

   for(int i=2; i<number; i++)
   {
      if(number%i == 0)
      {
	return false;
      }
   }

   return true;
}

//int main()
//{
//   prime_number pnum;
//   bool result= pnum.is_prime(13);
//   std::cout<<result<<std::endl;
//}
