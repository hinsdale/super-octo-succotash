#include "Player.h"
using namespace std;

/**
 * Creates a new player
 */
Player::Player(string name, int16_t health, int16_t power)
	:name(name),health(health),power(power) {

}

/**
 * Attacks the provided player
 */
void Player::attack(Player& target) {
	target.defend(this->power);
}


/**
 * Defends an attack
 */
void Player::defend(int16_t power) {
	this->health = this->health - power;
}


/**
 * Gets the current health of the player
 */
int16_t Player::getHealth() {
	return this->health;
}
