#pragma once

class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~AnimationScriptsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void AnimationScriptsDescription(void);
    void AnimationScriptsDescription(AnimationScriptsDescription&&);
};
