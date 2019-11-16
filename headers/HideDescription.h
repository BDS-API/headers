#pragma once

class HideDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~HideDescription();
    virtual void ~HideDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
