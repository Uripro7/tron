#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<ftxui/dom/elements.hpp>
#include<thread>
#include<fstream>
#include<string>

using namespace std;
using namespace ftxui; 

int main(int argc, char const *argv[])
{
    fstream archivo;
    archivo.open("./assets/imagees/moto.txt");
    string moto;
    while (archivo.good())
    {
        archivo >> moto;
    }
    archivo.close();

    int fotograma = 0;
    while (true)
    {
        this_thread::sleep_for(0.1s);
        fotograma++;
        Element personaje = spinner(21, fotograma) | bold | color(Color::Gold1) | bgcolor(Color::Black);
        Element eMoto = text(moto);
        Element dibujo = hbox({personaje, eMoto});
        Screen pantalla = Screen::Create(Dimension::Full());
        Render(pantalla,dibujo);
        pantalla.Print();
        pantalla.ResetPosition();
    }

        return EXIT_SUCCESS;
}