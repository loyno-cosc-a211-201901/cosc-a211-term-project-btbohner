#include <iostream>
using namespace std;

//Prototype Functions
void showMainMenu();
void showApartmentMenu();
void showKitchenMenu();
void showCabinetMenu();
void showDenMenu();

int main ()
{
//Variables
int mainMenuSelection;
int apartmentMenuSelection;
int kitchenMenuSelection;
int cabinetSelection;
int denSelection;
int powerButton;

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
      cout << "\n";
      do
      {
        showApartmentMenu();
        cout << "Where will you go? ";
        cin >> apartmentMenuSelection;
        cout << "\n";
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
                cout << "\n";
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
                    //Cabinet option 5.
                    case 5:
                    cout << "You return to the entrance of the kitchen.\n";
                    cout << "\n";
                    break;
                  }
                }
                while (cabinetSelection != 5);
                break;

                //Explore the pantry.
                case 3:
                cout << "The pantry contains an odd assortment of spices, a half eaten loaf of bread, and various packaged snacks.\n";
                cout << "\n";
                break;

              }
            }
            while (kitchenMenuSelection != 4);
            cout << "You return to the entrance of the apartment.\n";
            cout << "\n";
            break;

            //Case 2 is the Den in the apartment
            case 2:
            cout << "You proceed to what would be the Den of the apartment.\n";
            cout << "There is an aging leather couch on top of a tacky rug, as well as a TV mounted on the wall.\n";
            cout << "The TV shows nothing but static.\n";
            cout << "\n";
            do
            {
            showDenMenu();
            cout << "What would you like to see? ";
            cin >> denSelection;
            cout << "\n";

              switch (denSelection)
              {
                //Rug option.
                case 1:
                cout << "You drop to your knees to inspect the dirty, frayed rug.\n";
                cout << "You find nothing ...\n";
                cout << "\n";
                break;
                //TV option.
                case 2:
                cout << "Your attention turns to an old, cathode ray tube television.\n";
                cout << "The screen shows nothing but static, which seems to be illuminating the den.\n";
                cout << "\n";
                break;
                //Couch option.
                case 3:
                cout << "You look towards the couch.\n";
                cout << "The green leather is torn, and falling apart.\n";
                cout << "You spot a remote control for the TV. It is completely covered in tape, except for the power button.\n";
                cout << "\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                cout << "Press it? ";
                cin >> powerButton;
                cout << "\n";

                  switch (powerButton)
                  {
                    //Yes. Turn power off.
                    case 1:
                    cout << "You press the power button.\n";
                    cout << "As static fades off of the screen, the den becomes a bit darker.\n";
                    cout << "\n";
                    break;
                    //No. Leave TV on.
                    case 2:
                    cout << "You leave the TV powered on.\n";
                    cout << "\n";
                    break;
                  }
                break;

              }
            }
            while (denSelection != 4);
            cout << "You return to the entrance of the apartment.\n";
            cout << "\n";
            break;


          }
      }
      while (kitchenMenuSelection == 4 || denSelection == 4);  //ADD OR STATEMENT HERE TO DEAL WITH THE REST OF THE ROOMS
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

  void showDenMenu()
  {
    cout << "1. Rug\n";
    cout << "2. TV\n";
    cout << "3. Couch\n";
    cout << "4. Go Back\n";
  }
