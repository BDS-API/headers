#pragma once



class SkinData {

public:
    void serialize()const;
    SkinData(SkinData &&);
    SkinData(int, int);
    SkinData(Actor const&);
    SkinData(Json::Value const&);
    void softMatch(SkinData const&, bool &)const;
    void applyToActor(Actor &)const;
};
