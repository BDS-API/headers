#pragma once

#include "../json/Value.h"
#include "../bedrock/actor/Actor.h"


class SkinData {

public:
    SkinData(Actor const&);
    SkinData(SkinData &&);
    void applyToActor(Actor &)const;
    void softMatch(SkinData const&, bool &)const;
    void serialize()const;
    SkinData(int, int);
    SkinData(Json::Value const&);
};
