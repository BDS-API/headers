#pragma once

class TameableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void TameableDescription::~TameableDescription();
    virtual void TameableDescription::~TameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
