#pragma once



class Ability {

public:
    class Value;

    Ability(); // _ZN7AbilityC2Ev
//  Ability(bool, Ability::Options); //TODO: incomplete function definition // _ZN7AbilityC2EbNS_7OptionsE
//  Ability(float, Ability::Options); //TODO: incomplete function definition // _ZN7AbilityC2EfNS_7OptionsE
    void operator==(Ability const&)const; // _ZNK7AbilityeqERKS_
    void operator!=(Ability const&)const; // _ZNK7AbilityneERKS_
    void getType()const; // _ZNK7Ability7getTypeEv
    void getBool()const; // _ZNK7Ability7getBoolEv
    void setBool(bool); // _ZN7Ability7setBoolEb
//  void reset(Ability::Type); //TODO: incomplete function definition // _ZN7Ability5resetENS_4TypeE
    void getFloat()const; // _ZNK7Ability8getFloatEv
    void setFloat(float); // _ZN7Ability8setFloatEf
//  bool hasOption(Ability::Options)const; //TODO: incomplete function definition // _ZNK7Ability9hasOptionENS_7OptionsE
    class Value {

    public:
        Value(); // _ZN7Ability5ValueC2Ev
        Value(bool); // _ZN7Ability5ValueC2Eb
        Value(float); // _ZN7Ability5ValueC2Ef
    };
};
