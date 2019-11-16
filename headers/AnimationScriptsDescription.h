#pragma once

class AnimationScriptsDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~AnimationScriptsDescription();
    virtual void ~AnimationScriptsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
