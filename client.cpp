#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

string nick1;
string input;
string magnitic_stanard = "===";
const int wall_height = 5;
const int wall_width = 5;
char input2;
bool nick_exist;
enum movers_of_magnets {LEFT, RIGHT};
movers_of_magnets mov;
int x = 0;




void draw()
{
    system("cls");
    for (int amg = 0; amg < wall_width + 2; amg++)
    cout << "-" << endl;
    for (int amg = 0; amg < wall_height; amg++) {
        for (int dar = 0; dar < wall_width; dar++){
            if (dar == 0)
            cout << "-" << endl;
        }
    }
    system("pause");

}

void cons()
{
    if (_kbhit()){
    switch(_getch()){
     case 'a':
     mov = LEFT;
     break;

     case 'd':
     mov = RIGHT;
     break;
 }  
    }
}

void move_func()
{
    switch(mov){
        case LEFT:
        x--;
        break;

        case RIGHT:
        x++;
        break;
    }
}


int main()
{
    cout << "Enter your nickname" << endl;
    cin >> nick1;
    if (nick1 == "")
    {
        system("cls");
        cout << "You entered empty nick!" << endl;
        system("pause");
        return main();
    }
    else{
        nick_exist = true;
        
    }


    system("cls");
    cout << "Hello " + nick1 + "!" << endl;
    cout << "Magneta mono" << endl;
    cout << "1. Start game" << endl;
    cout << "2. Exit" << endl;
    cin >> input;

    if (input == "1")
    {
        draw();
        cons();
        move_func();

    }
    if (input == "2")
    {
        return 0;
    }
   


}

