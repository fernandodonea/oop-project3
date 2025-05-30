
/*
    WorldManager - Manages the game world and global systems.

    Responsible for handling the world background, 
    global game variables (such as points/score),
    and rendering the world environment.
*/




#ifndef WORLD_MANAGER_H
#define WORLD_MANAGER_H

#include <SFML/Graphics.hpp>


class WorldManager
{
    private:
        //World 
        sf::Texture m_world_background_texture;
        sf::Sprite m_world_background;

        //Systems
        int points;
        
    public:
        //Constructor and destructor
        WorldManager()=default;
        WorldManager(sf::Texture* texture);
        ~WorldManager()=default;

        //Getters
        const sf::Sprite& GetBackground() const;
        int GetPoints() const;

        //Setters
        void SetPoints(int value);
        void AddPoints(int value);

        //Functions
        void Render(sf::RenderTarget& target);


};

#endif //WORLD_MANAGER_H