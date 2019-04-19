#include<string>

class Player {
private:
	std::string name;
	std::int16_t health;
	std::int16_t power;
public:
	Player(std::string, std::int16_t health, std::int16_t power);


	/**
	 * Attacks the provided player
	 */
	virtual void attack(Player& target);


	/**
	 * Defends an attack
	 */
	virtual void defend(int16_t power);


	/**
	 * Gets the current health of the player
	 */
	virtual std::int16_t getHealth();
};
