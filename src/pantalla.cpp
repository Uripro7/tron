#include <iostream>
#include <thread>
#include <ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;


int main (int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    int x = 0;
    while (true)
    {

        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x,5).character = "Hola";
        pantalla.PixelAt(x,6).character = "Mundo";
        pantalla.PixelAt(x,8).character = "   , ";
        pantalla.PixelAt(x,9).character = ".-/c-.,:: ";
        pantalla.PixelAt(x,10).character = "(_)'==(_)";


        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }
}