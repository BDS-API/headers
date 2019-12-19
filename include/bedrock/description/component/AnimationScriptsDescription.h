#pragma once

class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual AnimationScriptsDescription::~AnimationScriptsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationScriptsDescription(void);
    AnimationScriptsDescription(AnimationScriptsDescription&&);
};
