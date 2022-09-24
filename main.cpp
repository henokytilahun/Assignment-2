#include <iostream>
#include <cmath>

void display_UNLV()
{
  //display the UNLV Zoo Logo

  std::cout << "+---------------------------------------------------------------------------+\n";
  std::cout << "|    UU     UU  NNNN     NN  LL       VV      VV         CCCCCC    SSSSSSSS |\n";
  std::cout << "|   /UU    /UU /NN//NN  /NN /LL      /VV     /VV       CC    //  /SS        |\n";
  std::cout << "|   /UU    /UU /NN //NN /NN /LL      //VV    VV       /CC        /SSSSSSSSS |\n";
  std::cout << "|   /UU    /UU /NN  //NN/NN /LL       //VV  VV        /CC        ////////SS |\n";
  std::cout << "|   /UU    /UU /NN   //NNNN /LL        //VVVV         //CC    CC        /SS |\n";
  std::cout << "|   //UUUUUUU  /NN    //NNN /LLLLLLLL   //VV           //CCCCCC   SSSSSSSS  |\n";
  std::cout << "|    ///////   //      ///  ////////     //              //////   ////////  |\n";
  std::cout << "|                                                                           |\n";
  std::cout << "|             ZZZZZZZZ           OOOOOOO         OOOOOOO                    |\n";
  std::cout << "|                 /ZZ           OO/////OO       OO/////OO                   |\n";
  std::cout << "|                /ZZ           OO     //OO     OO     //OO                  |\n";
  std::cout << "|               /ZZ           /OO      /OO    /OO      /OO                  |\n";
  std::cout << "|              /ZZ            /OO      /OO    /OO      /OO                  |\n";
  std::cout << "|             /ZZ             //OO     OO     //OO     OO                   |\n";
  std::cout << "|           //ZZZZZZZZZZ       //OOOOOOO       //OOOOOOO                    |\n";
  std::cout << "|           ///////////         ///////         ///////                     |\n";
  std::cout << "+---------------------------------------------------------------------------+\n";
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "*****************************************************************************\n";
  std::cout << "             Welcome to the UNLV Zoo - Food Supply Department!\n";
  std::cout << "*****************************************************************************\n";
  std::cout << "\n";
}


int main()
{
  //display the heading code from above
  display_UNLV();

  //initalize global const
  const double LITTLE_ZEBRA = 5; //food baby zebra needs
  const double GROWTH_RATE_ZEBRA = 0.05;
  const double LITTLE_RABBIT = 0.5; //food baby rabbot needs
  const double GROWTH_RATE_RABBIT = .10;
  
  //initalize global variables
  int num_of_month = 0; //UI
  double updated_zebra = 0.0; //updated food supply for grown zebra
  double updated_rabbit = 0.0; //updated food supply for grown rabbit
  int num_of_zebra = 0; //total zebra pop
  int num_of_rabbit = 0; //total zebra pop
  double total_food_zebra = 0.0; //food needed to feed zebra pop for num_of_months
  double total_food_rabbit = 0.0; //food needed to feed rabbit pop for num_of_months
  double total_food = 0.0 //food needed for both

  //display const
  std::cout << "The food/day for a baby zebra is constant (lbs): " << LITTLE_ZEBRA << "\n";
  std::cout << "The food/day for a baby rabbit is constant (lbs): " << LITTLE_RABBIT << "\n";
  std::cout << "After growing the number of months: \n";
  cin >> num_of_month;
  
  
  return 0;
}