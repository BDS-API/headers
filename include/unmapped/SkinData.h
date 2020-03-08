#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class SkinData {

public:

    SkinData(SkinData&&);
    SkinData(Actor const&);
    SkinData(int, int);
    SkinData(Json::Value const&);
    void serialize()const;
    void applyToActor(Actor &)const;
    void softMatch(SkinData const&, bool &)const;
};
