#pragma once

#include "./Ability.h"


class Ability {

public:

    Ability();
//  Ability(bool, Ability::Options); //TODO: incomplete function definition
//  Ability(float, Ability::Options); //TODO: incomplete function definition
    void operator==(Ability const&)const;
    void operator!=(Ability const&)const;
    void getType()const;
    void getBool()const;
    void setBool(bool);
//  void reset(Ability::Type); //TODO: incomplete function definition
    void getFloat()const;
    void setFloat(float);
//  bool hasOption(Ability::Options)const; //TODO: incomplete function definition
};
