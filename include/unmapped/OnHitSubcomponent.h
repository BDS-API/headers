#pragma once



class OnHitSubcomponent {

public:
    virtual ~OnHitSubcomponent(); // _ZN17OnHitSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    OnHitSubcomponent(); // _ZN17OnHitSubcomponentC2Ev
    void _canAttack(Actor *, Actor *)const; // _ZNK17OnHitSubcomponent10_canAttackEP5ActorS1_
    void readfromJSON(Json::Value &); // _ZN17OnHitSubcomponent12readfromJSONERN4Json5ValueE
    void writetoJSON(Json::Value &)const; // _ZNK17OnHitSubcomponent11writetoJSONERN4Json5ValueE
    void getSubcomponentName(); // _ZN17OnHitSubcomponent19getSubcomponentNameEv
};
