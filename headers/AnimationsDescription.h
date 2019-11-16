#pragma once

class AnimationsDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~AnimationsDescription();
    virtual ~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
