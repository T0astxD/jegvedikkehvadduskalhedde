#include <iostream>


class Wizard {
public:
	Wizard(std::string newName) {
		name = newName;
	}

	Wizard(std::string newName, int newDamage) {
		name = newName;
		damage = newDamage;
	}

	int cast_spell() {
		return damage;
	}
	std::string name;
private:
	int damage{ 5 };
};

class Alien {
public:
	int x_coordinate{2};
	int y_coordinate{0};

	Alien(int new_x_coordinate, int new_y_coordinate) {
		new_x_coordinate = x_coordinate;
		new_y_coordinate = y_coordinate;

	}

	int get_health() {
		return health;
	}

	void hit() {
		health--;
	}

	bool is_alive() {
		if (health <= 0) {
			return false;
		}
		else {
			return true;
		}
	}

	int teleport(int x_new, int y_new) {
		x_coordinate = x_new;
		y_coordinate = y_new;
		return true;
	}

	bool collision_detection(Alien other) {
		return x_coordinate == other.x_coordinate && y_coordinate == other.y_coordinate;
	}

private:
	int health = 3;
};




int main() {
	Wizard silverhand{"Silverhand"};
	Wizard vecna{ "Vecna",50 };

	Alien alien{ 2,0 };
	alien.x_coordinate;
	alien.y_coordinate;
	alien.get_health();
	std::cout << alien.x_coordinate << "\n";
	std::cout << alien.y_coordinate << "\n";
	std::cout << alien.get_health()<<"\n";
	alien.hit();
	alien.hit();
	alien.hit();
	alien.is_alive();
	std::cout << alien.get_health() << "\n";
	std::cout << alien.is_alive() << "\n";
	alien.teleport(5, -4);
	std::cout <<"new x coordinate: " << alien.x_coordinate << "\n";
	std::cout <<"new y coordinate: " << alien.y_coordinate << "\n";

	Alien lrrr{ 3, 6 };
	Alien ndnd{ 3,6 };
	lrrr.collision_detection(ndnd);
	// => false
	ndnd.teleport(3, 6);
	ndnd.collision_detection(lrrr);
	std::cout << lrrr.collision_detection(ndnd) << "\n";
	std::cout << ndnd.collision_detection(lrrr) << "\n";


	return 0;
}