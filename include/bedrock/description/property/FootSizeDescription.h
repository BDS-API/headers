#pragma once

#include "../../../json/Value"


class FootSizeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual FootSizeDescription::~FootSizeDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FootSizeDescription(void);
};
