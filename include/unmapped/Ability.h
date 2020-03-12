#pragma once



class Ability {

public:
    class Value;

//  Ability(bool, Ability::Options); //TODO: incomplete function definition
    void setBool(bool);
//  Ability(float, Ability::Options); //TODO: incomplete function definition
//  bool hasOption(Ability::Options)const; //TODO: incomplete function definition
    void getFloat()const;
    void getType()const;
    void getBool()const;
    void operator==(Ability const&)const;
    void setFloat(float);
    void operator!=(Ability const&)const;
//  void reset(Ability::Type); //TODO: incomplete function definition
    Ability();
    class Value {

    public:
        Value(bool);
        Value();
        Value(float);
    };
};
