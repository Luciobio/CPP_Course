#include "Pokemon.h"

Pokemon::Pokemon() {
	cout << "Pokemon::Pokemon() : Constructor" << endl;
}

Pokemon::~Pokemon() {
	cout << "Pokemon::~Pokemon() : Destructor" << endl;
}

string Pokemon::get_name() const {
	return name;
}

int Pokemon::get_health() const {
	return health;
}

int Pokemon::get_damage() const {
	return damage;
}

int Pokemon::get_experience() const {
	return experience;
}
unsigned int Pokemon::get_level() const {
	return level;
}

void Pokemon::set_name(string new_name) {
	name = new_name;
}

void Pokemon::set_health(int new_health) {
	health = new_health;
}

void Pokemon::set_damage(int new_damage) {
	damage = new_damage;
}

void Pokemon::set_experience(int new_experience) {
	experience = new_experience;
}

void Pokemon::set_level(unsigned int new_level) {
	level = new_level;
}

void Pokemon::attack(Pokemon other_pokemon)
{
}

void Pokemon::take_damage(int pokemon_damage)
{
}

