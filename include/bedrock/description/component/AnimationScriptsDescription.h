#pragma once

#include "../../../json/Value"


class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual AnimationScriptsDescription::~AnimationScriptsDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationScriptsDescription(void);
    AnimationScriptsDescription(AnimationScriptsDescription&&);
};
