#pragma once

#include "ComponentDescription.h"


class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ~AnimationScriptsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    AnimationScriptsDescription(AnimationScriptsDescription &&);
    AnimationScriptsDescription();
};
