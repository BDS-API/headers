#pragma once

#include "../../../json/Value"


class RuntimeIdentifierDescription : DefintionDescription {

public:
    virtual RuntimeIdentifierDescription::~RuntimeIdentifierDescription()
    virtual void getJsonName()const;

    RuntimeIdentifierDescription(void);
    RuntimeIdentifierDescription(RuntimeIdentifierDescription&&);
    void parse(Json::Value &);
};
