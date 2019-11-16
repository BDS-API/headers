#pragma once

class NameableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void NameableDescription::~NameableDescription();
    virtual void NameableDescription::~NameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
