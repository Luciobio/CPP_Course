#pragma once
#include <iostream>

using namespace std;
                               
class Pokemon
{

private:
	string name;
	int health;
	int damage;
	int experience;
	unsigned int level;

public:
	Pokemon(); //Constructor
	~Pokemon(); //Destructor

	string get_name() const;
	int get_health() const;
	int get_damage() const;
	int get_experience() const;
	unsigned int get_level() const;

	void set_name(string new_name);
	void set_health(int new_health);
	void set_damage(int new_damage);
	void set_experience(int new_experience);
	void set_level(unsigned int new_level);

	void attack(Pokemon other_pokemon);
	void take_damage(int pokemon_damage);
}; 

