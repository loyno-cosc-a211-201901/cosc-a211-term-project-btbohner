#include <iostream>
using namespace std;


void showKitchenMenu();
void showCabinetMenu();

int main ()
{
int kitchenmenuselection;
int cabinetmenuselection;

showKitchenMenu();
cin >> kitchenmenuselection;
  do
  {
    switch (kitchenmenuselection)
    {
      case 1:
      break;
      case 2:
      do
      {
      showCabinetMenu();
      cin >> cabinetmenuselection;
          switch (cabinetmenuselection)
          {
            case 1:
            cout << "you selected 1\n";
            break;
            case 2:
            cout << "you selected 2\n";
            break;
          }
      }
        while (cabinetmenuselection != 4);
    }
  }
  while (kitchenmenuselection != 4);
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
