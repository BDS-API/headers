#pragma once

class RuntimeIdentifierDescription : DefintionDescription {

public:
    virtual RuntimeIdentifierDescription::~RuntimeIdentifierDescription();
    virtual void getJsonName(void)const;

    RuntimeIdentifierDescription(void);
    RuntimeIdentifierDescription(RuntimeIdentifierDescription&&);
    void parse(Json::Value &);
};
