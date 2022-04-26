#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

std::string nick1;
std::string input;
std::string magnitic_stanard = "===\n";
const int wall_height = 5;
const int wall_width = 5;
int x,y;
char input_number_two;
bool nick_exist;
enum movers_of_magnets {LEFT, RIGHT};
movers_of_magnets mov;



void set()
{
    x = wall_width / 2;
    y = wall_height / 2;
}

void draw()
{
    system("cls");
    for (int part_wall = 0; part_wall < wall_width + 2; part_wall++)
    std::cout << "-\n";
    for (int part_wall = 0; part_wall < wall_height; part_wall++) {
        for (int wall = 0; wall < wall_width; wall++){
            if (wall == 0)
            std::cout << "-\n";
            if (part_wall == y && wall == x){
                std::cout << magnitic_stanard;
            }
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
    std::cout << "Enter your nickname\n";
    std::cin >> nick1;
    if (nick1 == "")
    {
        system("cls");
        std::cout << "You entered empty nick!\n";
        system("pause");
        return main();
    }
    else{
        nick_exist = true;
        
    }


    system("cls");
    std::cout << "Hello " + nick1 + "!\n";
    std::cout << "Magneta Mono\n";
    std::cout << "1. Start game\n";
    std::cout << "2. Exit\n";
    std::cout << "MaMo_C_VER_PA_0_0_6\n";
    std::cout << "April 26, 2022\n";
    std::cin >> input;

    if (input == "1")
    {
        set();
        draw();
        cons();
        move_func();

    }
    if (input == "2")
    {
        return 0;
    }
   


}

