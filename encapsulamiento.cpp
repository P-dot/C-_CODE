#include <iostream>
using namespace std;

class Auto{
   
   private:
   	   string Color;

   public:
   	   void AgregarColor(string_Color)
   	   {
   	   	   Color = _Color;
   	   }

   	   string ObtenerColor()
   	   {
   	   	   return Color;
   	   }
}

int main()
{
	Auto miAuto;

	miAuto.AgregarColor("negro");

	cout << miAuto.ObtenerColor();
}