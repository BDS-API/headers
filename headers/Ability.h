#pragma once

class Ability {

public:

    void Ability(void);
    void Ability(bool, Ability::Options);
    void Ability(float, Ability::Options);
    void getType(void)const;
    void getBool(void)const;
    void setBool(bool);
    void reset(Ability::Type);
    void getFloat(void)const;
    void setFloat(float);
    bool hasOption(Ability::Options)const;
};
