#include <iostream>
#include <cmath>

using namespace std;

//Prototype Functions
void showMainMenu();            //Shows main game menu.
void showApartmentMenu();       //Shows the menu of available paths in apartment.
void showKitchenMenu();         //Shows the menu of available paths in kitchen.
void showCabinetMenu();         //Shows the menu of available cabinets to look through.
void showDenMenu();             //Shows the menu of available paths in den.
void showBedroomMenu();         //Shows the menu of available paths in bedroom.
void showDresserMenu();         //Shows the menu of available drawers to look through.
void showDeskMenu();            //Shows the menu of available items to look at on the desk.

int main ()
{
//Variables
int mainMenuSelection;          //Stores user selection for main menu.
int apartmentMenuSelection;     //Stores user selection for apartment menu.
int kitchenMenuSelection;       //Stores user selection for kitchen menu.
int cabinetSelection;           //Stores user selection for cabinet menu.
int denSelection;               //Stores user selection for den menu.
int powerButton;                //Stores user selection for remote on/off function.
int bedroomSelection;           //Stores user selection for bedroom menu.
int dresserSelection;           //Stores user selection for dresser menu.
int readNote;                   //Stores user selection for reading the note found in the dresser.
int deskSelection;              //Stores user selection for desk menu.

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
  cout << "Welcome to the world of Sleepless.\n";
  do
  {
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
                  while (cabinetSelection < 1 || cabinetSelection > 5)
                  {
                    cout << "Your selection must be between 1 and 5.\n";
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
              while (kitchenMenuSelection < 1 || kitchenMenuSelection > 4)
              {
                cout << "Your selection must be between 1 and 4.\n";
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
                //Couch option. Also allows user to turn TV ON or OFF.
                case 3:
                cout << "You look towards the couch.\n";
                cout << "The green leather is torn, and falling apart.\n";
                cout << "You spot a remote control for the TV. It is completely covered in tape, except for the power button.\n";
                cout << "\n";
                do
                {
                cout << "1. Yes\n";
                cout << "2. No\n";
                cout << "Press it? ";
                cin >> powerButton;
                cout << "\n";
                  //Power button on remote TV on or off.
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
                  while (powerButton < 1 || powerButton > 2)
                  {
                    cout << "Your selection must be either 1 or 2.\n";
                    break;
                  }
                }
                while (powerButton < 1 || powerButton > 2);
                break;

              }
              while (denSelection < 1 || denSelection > 4)
              {
                cout << "Your selection must be between 1 and 4.\n";
                break;
              }
            }
            while (denSelection != 4);
            cout << "You return to the entrance of the apartment.\n";
            cout << "\n";
            break;

            //Case 3 is the bedroom.
            case 3:
            cout << "You walk deeper into the apartment.\n";
            cout << "Passing a foldable partition you find yourself in what would be the bedroom.\n";
            cout << "You find a wooden dresser, a PC on top of a glass desk with two drawers, and \n";
            cout << "a mattress laid on top of some painted wooden pallets.\n";
            cout << "\n";
            do
            {
              showBedroomMenu();
              cout << "What would you like to see? ";
              cin >> bedroomSelection;
              cout << "\n";

              switch (bedroomSelection)
              {
                //Dresser option.
                case 1:
                cout << "You approach the dresser.\n";
                cout << "The paint which seemingly used to be blue, has taken on a bluish tint,\n";
                cout << "The handles on each of the four drawers are made of tarnished brass.\n";
                cout << "\n";
                do
                {
                  showDresserMenu();
                  cout << "Which will you open? \n";
                  cin >> dresserSelection;
                  cout << "\n";

                    switch (dresserSelection)
                    {
                      //Top left.
                      case 1:
                      cout << "This drawer contains a messy assortment of men's underwear and a few pairs of socks\n";
                      cout << "\n";
                      break;
                      //Top right.
                      case 2:
                      cout << "This drawer contains two neatly folded stacks of Tshirts.\n";
                      cout << "You find a crumpled up note tucked beneath a few of the shirts\n";
                      cout << "\n";
                      do
                      {
                      cout << "1. Yes\n";
                      cout << "2. No\n";
                      cout << "Read the note? ";
                      cin >> readNote;
                      cout << "\n";
                        //Read note yes/no
                        switch (readNote)
                        {
                          //Case 1 is if user chooses to read note.
                          case 1:
                          cout << "You unfold the note.\n";
                          cout << "ENTER WHAT NOTE SAYS HERE\n";
                          cout << "\n";
                          break;
                          //Case 2 is if user chooses not to read note.
                          case 2:
                          cout << "You return the note to its original resting place.\n";
                          cout << "\n";
                          break;
                        }
                        while (readNote < 1 || readNote > 2)
                        {
                          cout <<"Your selection must be either one or 2.\n";
                          break;
                        }
                      }
                      while (readNote < 1 || readNote > 2);
                      break;
                      //Bottom left.
                      case 3:
                      cout << "This drawer contains a combination of shorts, sweatpants, and jeans. All of which seem to vary in size.\n";
                      cout << "\n";
                      break;
                      //Bottom right.
                      case 4:
                      cout << "It seems as though this drawer is the counterpart to the one next to it.\n";
                      cout << "You find a limited selection of sweaters, hoodies, and longsleeve Tshirts.\n";
                      cout << "\n";
                      break;
                    }
                    while (dresserSelection < 1 || dresserSelection > 4)
                    {
                      cout << "Your selection must be between 1 and 5\n";
                      break;
                    }
                }
                while (dresserSelection != 5);
                break;
                //Desk option.
                case 2:
                cout << "On top of the desk is a high resolution monitor displaying an image of a dark futuristic city, a keyboard, and a pair of speakers.\n";
                cout << "The PC appears to be password protected.\n";
                cout << "On either side of the desk you find a drawer.\n";
                cout << "\n";
                do
                {
                  showDeskMenu();
                  cout << "Will you open one? ";
                  cin >> deskSelection;
                  cout << "\n";
                    //Drawer Selection.
                    switch (deskSelection)
                    {
                      //Case 1 is the left drawer.
                      case 1:
                      cout << "This drawer contains a selection of notepads and writing implements, as well as a pocket knife.\n";
                      break;
                      //Case 2 is the right drawer.
                      case 2:
                      cout << "This drawer contains a half empty bottle of cheap bourbon, and a single glass.\n";
                      break;
                    }
                    while (deskSelection < 1 ||deskSelection > 3)
                    {
                      cout << "Your selection must be between 1 and 3.\n";
                      break;
                    }
                }
                while (deskSelection != 3);
                break;
                //Mattress option.
                case 3:
                cout << "The mattress is loosely covered by a set of rough, gray sheets that seem too large for it.\n";
                cout << "At the head of the bed there are two heavily used pillows, covered with purple pillowcases.\n";
                break;
              }
              while (bedroomSelection < 1 || bedroomSelection > 4)
              {
                cout << "Your selection must be between 1 and 4.\n";
                break;
              }
            }
            while (bedroomSelection != 4);
            cout << "You return to the entrance of the apartment.\n";
            cout << "\n";
            break;

          }
          while (apartmentMenuSelection < 1 || apartmentMenuSelection > 5)
          {
            cout << "Your selection must be between 1 and 5.\n";
            break;
          }
      }
      while (apartmentMenuSelection < 1 || apartmentMenuSelection > 5 || kitchenMenuSelection == 4 || denSelection == 4 || bedroomSelection == 4);  //ADD OR STATEMENT HERE TO DEAL WITH THE REST OF THE ROOMS
    }
    while (mainMenuSelection < 1 || mainMenuSelection > 3)
    {
      cout << "Your selection must be between 1 and 3.\n";
      break;
    }
  }
  while (mainMenuSelection < 1 || mainMenuSelection > 3 || apartmentMenuSelection == 5);
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
    cout << "\n";
    cout << "###########\n";
    cout << "1. Kitchen\n";
    cout << "2. Den\n";
    cout << "3. Bedroom\n";
    cout << "4. Hallway\n";
    cout << "5. Exit\n";
    cout << "###########\n";
  }

  void showKitchenMenu()
  {
    cout << "\n";
    cout << "################\n";
    cout << "1. Stove\n";
    cout << "2. Sink Cabinets\n";
    cout << "3. Pantry\n";
    cout << "4. Go Back\n";
    cout << "################\n";
  }

  void showCabinetMenu()
  {
    cout << "\n";
    cout << "########################\n";
    cout << "1. Furthest to the left\n";
    cout << "2. Second from the left\n";
    cout << "3. Second from the right\n";
    cout << "4. Furthest to the right\n";
    cout << "5. Go Back\n";
    cout << "########################\n";
  }

  void showDenMenu()
  {
    cout << "\n";
    cout << "##########\n";
    cout << "1. Rug\n";
    cout << "2. TV\n";
    cout << "3. Couch\n";
    cout << "4. Go Back\n";
    cout << "##########\n";
  }

  void showBedroomMenu()
  {
    cout << "\n";
    cout << "##########\n";
    cout << "1. Dresser\n";
    cout << "2. Desk\n";
    cout << "3. Bed\n";
    cout << "4. Go Back\n";
    cout << "##########\n";
  }

  void showDresserMenu()
  {
    cout << "\n";
    cout << "###############\n";
    cout << "1. Top left\n";
    cout << "2. Top right\n";
    cout << "3. Bottom left\n";
    cout << "4. Bottom right\n";
    cout << "5. Go Back\n";
    cout << "###############\n";
  }

  void showDeskMenu()
  {
    cout << "\n";
    cout << "###############\n";
    cout << "1. Left drawer\n";
    cout << "2. Right drawer\n";
    cout << "3. Go Back\n";
    cout << "###############\n";
  }
