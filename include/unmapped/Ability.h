#pragma once



class Ability {

public:
    class Value;

    void setBool(bool);
//  Ability(float, Ability::Options); //TODO: incomplete function definition
    void setFloat(float);
    void getType()const;
//  bool hasOption(Ability::Options)const; //TODO: incomplete function definition
    void operator==(Ability const&)const;
//  void reset(Ability::Type); //TODO: incomplete function definition
    Ability();
//  Ability(bool, Ability::Options); //TODO: incomplete function definition
    void operator!=(Ability const&)const;
    void getBool()const;
    void getFloat()const;
    class Value {

    public:
        Value(float);
        Value();
        Value(bool);
    };
};
