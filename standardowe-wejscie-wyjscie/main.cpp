 
 
#include <string>
#include <fstream>
#include <iostream>


using namespace std;

#define debug(x) std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl; 

// Przykladowe przekszalcenie linii tekstu.
std::string odwroc (const std::string & napis)
{
   std::string wynik(napis);
   size_t dlugosc = napis.length();
   char znak;
   for (std::size_t i = 0; i < dlugosc / 2; i++)
   {
      znak = wynik[i];
      wynik[i] = wynik[dlugosc - i - 1];
      wynik[dlugosc - i - 1] = znak;
   }
   
   return wynik;
   
}

// Prosta funkcja przeksztalcajaca linie tekstu.
// Funkcja czyta ze strumienia wejscie, zapisuje do strumienia wyjscie.
// Strumieniem moze byc otwarty plik, standardowy strumien, ...
void przeksztalc (std::istream & wejscie, std::ostream & wyjscie)
{
   std::string linia;
   while (getline(wejscie, linia))
   {
      wyjscie << odwroc (linia) << std::endl;
   }
}


int main (int ile, char ** params)
{
   std::string plikWe, plikWy;
   std::ifstream wejscie;
   std::ofstream wyjscie;
   
   switch (ile)
   {
      case 3: // jest wejscie i wyjscie
         plikWy = std::string (params[2]);
         wyjscie.open(plikWy);
         // bez break;
      case 2: // jest tylko wejscie
         plikWe = std::string (params[1]);
         wejscie.open(plikWe);
         break;
   }
   
   switch (ile)
   {
      case 3: 
         // Jako strumienie przekazane sa otwarte strumienie plikowe.
         przeksztalc (wejscie, wyjscie);
         wejscie.close();
         wyjscie.close();
         break;
      case 2: 
         // Strumieniem wejsciwym jest strumien plikowy, wyjsciowym -- standardowy strumien wyjsciowy.
         przeksztalc (wejscie, cout);
         wejscie.close();
         break;
      default:
         // Korzystamy ze strumieni standardowych.
         przeksztalc (cin, cout);
   }
   
   
   return 0;   
}
