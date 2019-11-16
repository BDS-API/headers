#pragma once

class AngryDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~AngryDescription();
    virtual void ~AngryDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
