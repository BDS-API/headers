#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class AnimationsDescription : ComponentDescription {

public:
    ~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    AnimationsDescription(AnimationsDescription &&);
    AnimationsDescription();
};
