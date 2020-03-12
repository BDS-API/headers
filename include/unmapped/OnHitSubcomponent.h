#pragma once



class OnHitSubcomponent {

public:
    ~OnHitSubcomponent();
    void getSubcomponentName();
    void writetoJSON(Json::Value &)const;
    void _canAttack(Actor *, Actor *)const;
    void readfromJSON(Json::Value &);
    OnHitSubcomponent();
};
