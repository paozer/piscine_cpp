#pragma once
#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    public:
        Enemy();
        Enemy(int hp, std::string const& type);
        virtual ~Enemy();
        Enemy(const Enemy&);
        Enemy &operator=(const Enemy&);

        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int);

    private:
        int _hp;
        std::string _type;
};

#endif
