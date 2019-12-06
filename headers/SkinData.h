#pragma once

class SkinData {

public:

    void SkinData(SkinData&&);
    void SkinData(Actor const&);
    void SkinData(int, int);
    void SkinData(Json::Value const&);
    void serialize(void)const;
    void applyToActor(Actor &)const;
    void softMatch(SkinData const&, bool &)const;
};
