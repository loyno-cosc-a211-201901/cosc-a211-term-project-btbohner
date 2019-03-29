#include <iostream>
using namespace std;

//Prototype Functions
void showMainMenu();
void showApartmentMenu();
void showKitchenMenu();
void showCabinetMenu();

int main ()
{
//Variables
int mainMenuSelection;
int apartmentMenuSelection;
int kitchenMenuSelection;
int cabinetSelection;

  //Display title art.
  cout << " \n";
  cout << "############################################################################################################################################################\n";
  cout << "############################################################################################################################################################\n";
  cout << "##                                                                                                                                                        ##\n";
  cout << "##     SSSSSSSSSSSSSSS lllllll                                                             lllllll                                                        ##\n";
  cout << "##   SS:::::::::::::::Sl:::::l                                                             l:::::l                                                        ##\n";
  cout << "##  S:::::SSSSSS::::::Sl:::::l                                                             l:::::l                                                        ##\n";
  cout << "##  S:::::S     SSSSSSSl:::::l                                                             l:::::l                                                        ##\n";
  cout << "##  S:::::S             l::::l     eeeeeeeeeeee        eeeeeeeeeeee    ppppp   ppppppppp    l::::l     eeeeeeeeeeee        ssssssssss       ssssssssss    ##\n";
  cout << "##  S:::::S             l::::l   ee::::::::::::ee    ee::::::::::::ee  p::::ppp:::::::::p   l::::l   ee::::::::::::ee    ss::::::::::s    ss::::::::::s   ##\n";
  cout << "##   S::::SSSS          l::::l  e::::::eeeee:::::ee e::::::eeeee:::::eep:::::::::::::::::p  l::::l  e::::::eeeee:::::eess:::::::::::::s ss:::::::::::::s  ##\n";
  cout << "##    SS::::::SSSSS     l::::l e::::::e     e:::::ee::::::e     e:::::epp::::::ppppp::::::p l::::l e::::::e     e:::::es::::::ssss:::::ss::::::ssss:::::s ##\n";
  cout << "##      SSS::::::::SS   l::::l e:::::::eeeee::::::ee:::::::eeeee::::::e p:::::p     p:::::p l::::l e:::::::eeeee::::::e s:::::s  ssssss  s:::::s  ssssss  ##\n";
  cout << "##         SSSSSS::::S  l::::l e:::::::::::::::::e e:::::::::::::::::e  p:::::p     p:::::p l::::l e:::::::::::::::::e    s::::::s         s::::::s       ##\n";
  cout << "##              S:::::S l::::l e::::::eeeeeeeeeee  e::::::eeeeeeeeeee   p:::::p     p:::::p l::::l e::::::eeeeeeeeeee        s::::::s         s::::::s    ##\n";
  cout << "##              S:::::S l::::l e:::::::e           e:::::::e            p:::::p    p::::::p l::::l e:::::::e           ssssss   s:::::s ssssss   s:::::s  ##\n";
  cout << "##  SSSSSSS     S:::::Sl::::::le::::::::e          e::::::::e           p:::::ppppp:::::::pl::::::le::::::::e          s:::::ssss::::::ss:::::ssss::::::s ##\n";
  cout << "##  S::::::SSSSSS:::::Sl::::::l e::::::::eeeeeeee   e::::::::eeeeeeee   p::::::::::::::::p l::::::l e::::::::eeeeeeee  s::::::::::::::s s::::::::::::::s  ##\n";
  cout << "##  S:::::::::::::::SS l::::::l  ee:::::::::::::e    ee:::::::::::::e   p::::::::::::::pp  l::::::l  ee:::::::::::::e   s:::::::::::ss   s:::::::::::ss   ##\n";
  cout << "##   SSSSSSSSSSSSSSS   llllllll    eeeeeeeeeeeeee      eeeeeeeeeeeeee   p::::::pppppppp    llllllll    eeeeeeeeeeeeee    sssssssssss      sssssssssss     ##\n";
  cout << "##                                                                      p:::::p                                                                           ##\n";
  cout << "##                                                                      p:::::p                                                                           ##\n";
  cout << "##                                                                     p:::::::p                                                                          ##\n";
  cout << "##                                                                     p:::::::p                                                                          ##\n";
  cout << "##                                                                     p:::::::p                                                                          ##\n";
  cout << "##                                                                     ppppppppp                                                                          ##\n";
  cout << "##                                                                                                                                                        ##\n";
  cout << "############################################################################################################################################################\n";
  cout << "############################################################################################################################################################\n";

  //Display Main Menu
  showMainMenu();
  cin >> mainMenuSelection;
  cout << "\n";

  switch (mainMenuSelection)
  {
    case 1:
    cout << "You find yourself in a dimly lit studio apartment with four areas to explore.\n";
    showApartmentMenu();
    cout << "Where will you go? ";
    cin >> apartmentMenuSelection;
    cout << "\n";
    do
    {
      switch (apartmentMenuSelection)
      {
        //Case 1 represents the kitchen selection.
        case 1:
        cout << "You enter the kitchen and see three obvious candidates for inspection.\n";
        do
        {
        showKitchenMenu();
        cout << "What would you like to see? ";
        cin >> kitchenMenuSelection;
        cout << "\n";

            switch (kitchenMenuSelection)
            {
              //Boiling water on stove.
              case 1:
              cout << "You approach the stove to find a pot of boiling water.\n";
              cout << "\n";
              break;
              //Four cabinet options.
              case 2:
              do
              {
              cout << "You find four cabinets under the sink.\n";
              showCabinetMenu();
              cout << "Which will you open? ";
              cin >> cabinetSelection;
              cout << "\n";

                switch (cabinetSelection)
                {
                  //Cabinet option 1.
                  case 1:
                  cout << "This cabinet contains various pots and pans, as well as a trail of rat droppings.\n";
                  cout << "\n";
                  break;
                  //Cabinet option 2.
                  case 2:
                  cout << "This cabinet contains various household cleaning supplies (Windex, Kaboom, Etc.)\n";
                  cout << "\n";
                  break;
                  //Cabinet option 3.
                  case 3:
                  cout << "This cabinet contains assorted sponges, rubber gloves, brushes, etc. Presumably to be used with the cleaning supplies.\n";
                  cout << "\n";
                  break;
                  //Cabinet option 4.
                  case 4:
                  cout << "This cabinet contains plates, bowls, and eating utensils.\n";
                  cout << "\n";
                  break;
                }
              }
              while (cabinetSelection < 5);
              break;
              //NEED TO RETURN TO PREVIOUS MENU

              //Explore the pantry.
              case 3:
              cout << "The pantry contains....ENTER FOOD OPTIONS HERE\n";
              cout << "\n";
              break;

            }
          }
          while (kitchenMenuSelection < 4);
      }
    }
    while (apartmentMenuSelection < 5);
  }



}
  void showMainMenu()
  {
    cout << "1. Play\n";
    cout << "2. About\n";
    cout << "3. Exit\n";
    cout << "Please make a selection: ";
  }

  void showApartmentMenu()
  {
    cout << "1. Kitchen\n";
    cout << "2. Den\n";
    cout << "3. Bedroom\n";
    cout << "4. Hallway\n";
    cout << "5. Exit\n";
  }

  void showKitchenMenu()
  {
    cout << "1. Stove\n";
    cout << "2. Sink Cabinets\n";
    cout << "3. Pantry\n";
    cout << "4. Go Back\n";
  }
  void showCabinetMenu()
  {
    cout << "1. Furthest to the left\n";
    cout << "2. Second from the left\n";
    cout << "3. Second from the right\n";
    cout << "4. Furthest to the right\n";
    cout << "5. Go Back\n";
  }
