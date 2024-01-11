#include <iostream>
using namespace std;

class Tollbooth
{
      //attributes
      int cars;
      double money;
      public:
      Tollbooth()
      {
           cars=0;
           money=0;
      }
      //methods
      void payingcar()
      {
           cars++;
           money+=50;
           cout<<"Entry Successfully added.\n";
      }

      void nopayingcar()
      {
           cars++;
           cout<<"Entry Successfully added.\n";
      }

      void display()
      {
           cout<<"Total numbers of cars: "<<cars<<endl;
           cout<<"Total money collected: "<<money<<endl;
      }
};
main()
{
      int key;
      char choice;
      Tollbooth a;
      check:
      cout<<"Press 1 if payment is delivered by car owner.\n";
      cout<<"Press 2 if payment is not delivered by car owner.\nPress 3 to display total payment and cars.\nPress 1 or 2 or 3: \n";
      //key paying car or nonpaying car.
      cin>>key;
      if(key==1)
      {
            a.payingcar();
      }
      else if(key==2)
      {
            a.nopayingcar();
      }
      else if(key==3)
      {
           a.display();
      }
      else
      {
           cout<<"Invalid Choice"<<endl;
           goto check;
      }

      cout<<"You like to enter data check? Y/N ";
      cin>>choice;
      if(choice=='Y' || choice=='y')
      {
           goto check; //goto label check at above.
      }
}
