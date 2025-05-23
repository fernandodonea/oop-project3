/*
* @class CombatManager
* @brief Handles the combat system.

    CombatManager is responsible for checking collision between: 
        - Player and Enemies: 
            -> the player takes damage from the enemy and the enemy is deleted
        - Bullets and Enemies:
            -> the enemy takes damage from the bullet
            -> if the enemy healthbat is depleated, increase the points and delete the enemy
            -> the bullet that hits an enemy does damage and then is deleted

*/


#ifndef COMBAT_MANAGER_H
#define COMBAT_MANAGER_H

#include "player.h"
#include "asteroid.h"
#include "bullet.h"
#include "world_manager.h"

class CombatManager
{
    public:
        //Functions
        void HandleEnemyPlayerCollision(
            Player *player,
            std::vector<Asteroid*>& asteroids
        );
        void HandleBulletEnemyCollisions(
            std::vector<Bullet*>& bullets,
            std::vector<Asteroid*>& asteroids,
            WorldManager *world
        );

        void Update(
            Player *player,
            std::vector<Asteroid*>& asteroids,
            std::vector<Bullet*>& bullets,
             WorldManager *world
        );

};

#endif //COMBAT_MANAGER_H