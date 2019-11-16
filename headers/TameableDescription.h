#pragma once

class TameableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TameableDescription();
    virtual void ~TameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
