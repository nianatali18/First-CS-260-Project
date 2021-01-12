#include <iostream>


#include <iostream>
#include <cstdlib>

using namespace std;


void remove(void)
{
    int max = 9;
    int randomnum;

    int red1 = 2;
    int red2 = 2;
    int red3 = 2;
    int red = red1 + red2 + red3;
    int green1 = 2;
    int green2= 2;
    int green3 = 2;
    int green = green1 + green2 + green3;
    int blue1 = 2;
    int blue2= 2;
    int blue3 = 2;
    int blue = blue1 + blue2 + blue3;
    int bag = red+green+blue;

    srand(time(0));

    do
    {
        randomnum = (rand() % max) + 1;

        if (randomnum == 1 && red1 > 0)
        {
            red--;
            red1--;
            cout << "The random marble removed was a red and cool marble" << endl;
        }
        else if (randomnum == 2 && red2 > 0)
        {
            cout << "The random marble removed was a red and weird marble" << endl;
            red--;
            red2--;
        }
        else if (randomnum == 3 && red3 > 0)
        {
            cout << "The random marble removed was a red and boring marble" << endl;
            red--;
            red3--;
        }
        else if (randomnum == 4 && green1 > 0)
        {
            cout << "The random marble removed was a green and cool marble" << endl;
            green--;
            green1--;
        }
        else if (randomnum == 5 && green2 > 0)
        {
            cout << "The random marble removed was a green and weird marble" << endl;
            green--;
            green2--;

        }
        else if (randomnum == 6 && green2 > 0)
        {
            cout << "The random marble removed was a green and boring marble" << endl;
            green3--;
            green--;
        }
        else if (randomnum == 7 && blue1 > 0)
        {
            cout << "The random marble removed was a blue and cool marble" << endl;
            blue--;
            blue1--;

        }
        else if (randomnum == 8 && blue2 > 0)
        {
            cout << "The random marble removed was a blue and weird marble" << endl;
            blue--;
            blue2--;
        }
        else if (randomnum == 9 && blue3 > 0)
        {
            cout << "The random marble removed was a blue and boring marble" << endl;
            blue--;
            blue3--;
        }

    } while (
        randomnum == 1 && red1 > 0 ||
        randomnum == 2 && red2 > 0 ||
        randomnum == 3 && red3 > 0 ||
        randomnum == 4 && green1 > 0 ||
        randomnum == 5 && green2 > 0 ||
        randomnum == 6 && green3 > 0 ||
        randomnum == 7 && blue1 > 0 ||
        randomnum == 8 && blue2 > 0 ||
        randomnum == 9 && blue3 > 0);

    bag--;

    std::cout << "red1 = " << red1 << ".\n";
    std::cout << "red2 = " << red2 << ".\n";
    std::cout << "red3 = " << red3 << ".\n";
    std::cout << "red = " << red << ".\n";
    std::cout << "green1 = " << green1 << ".\n";
    std::cout << "green2 = " << green2 << ".\n";
    std::cout << "green3 = " << green3 << ".\n";
    std::cout << "green = " << green << ".\n";
    std::cout << "blue1 = " << blue1 << ".\n";
    std::cout << "blue2 = " << blue2 << ".\n";
    std::cout << "blue3 = " << blue3 << ".\n";
    std::cout << "blue = " << blue << ".\n";
    std::cout << "bag = " << bag << ".\n";
}


int main(void)
{
    remove();
}