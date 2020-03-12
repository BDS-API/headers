#pragma once

#include "ComponentDescription.h"


class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~AnimationsDescription();
    AnimationsDescription();
    AnimationsDescription(AnimationsDescription &&);
};
