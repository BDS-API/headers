#pragma once

class Ability {

public:

    Ability(void);
    Ability(bool, Ability::Options);
    Ability(float, Ability::Options);
    void getType(void)const;
    void getBool(void)const;
    void setBool(bool);
    void reset(Ability::Type);
    void getFloat(void)const;
    void setFloat(float);
    bool hasOption(Ability::Options)const;
};
