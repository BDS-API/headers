#pragma once



class Ability {

public:

    Ability(void);
    Ability(bool, Ability::Options);
    Ability(float, Ability::Options);
    void getType()const;
    void getBool()const;
    void setBool(bool);
    void reset(Ability::Type);
    void getFloat()const;
    void setFloat(float);
    bool hasOption(Ability::Options)const;
};
