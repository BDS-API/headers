#pragma once

#include "../../../json/Value"


class NameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    NameableDescription::~NameableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NameableDescription(void);
    void parseNameActions(Json::Value &);
};
