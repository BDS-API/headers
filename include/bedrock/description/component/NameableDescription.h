#pragma once

class NameableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual NameableDescription::~NameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NameableDescription(void);
    void parseNameActions(Json::Value &);
};
