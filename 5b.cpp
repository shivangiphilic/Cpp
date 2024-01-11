#include <iostream>
using namespace std;

void exceptionFunction()
{
   try
   {
      //throw exception : In function
      throw 0;
   }
   catch (int i)
   {
      cout << "\nIn Function : Wrong Input :" << i;
      //re throw exception : out of the function
      throw;
   }
}

int main()
{
   int var = 0;
   // try block - for exception code
   try
   {
      exceptionFunction();
   }
   catch (int ex)
   {
      // Code executed when exception caught
      cout << "\nIn Main : Wrong Input :" << ex;
   }
}
