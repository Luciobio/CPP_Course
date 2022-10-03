#include "Pokemon.h"

int main()
{
	Pokemon pikachu;
	pikachu.set_name("Pikachu");
	pikachu.set_health(70);
	pikachu.set_experience(50);
	pikachu.set_level(5);
	pikachu.set_damage(15);

	Pokemon* charmander = new Pokemon();
	delete charmander;                            
}