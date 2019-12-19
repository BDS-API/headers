#pragma once

class SkinData {

public:

    SkinData(SkinData&&);
    SkinData(Actor const&);
    SkinData(int, int);
    SkinData(Json::Value const&);
    void serialize(void)const;
    void applyToActor(Actor &)const;
    void softMatch(SkinData const&, bool &)const;
};
