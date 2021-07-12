#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon {

private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon(void);
    std::string const & getType() const;
    void                setType(std::string type);

};

#endif