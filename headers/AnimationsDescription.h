#pragma once

class AnimationsDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~AnimationsDescription();
    virtual void ~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
