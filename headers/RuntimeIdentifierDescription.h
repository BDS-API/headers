#pragma once

class RuntimeIdentifierDescription : DefintionDescription {

public:
    virtual ~RuntimeIdentifierDescription();
    virtual void getJsonName(void)const;

    void RuntimeIdentifierDescription(void);
    void RuntimeIdentifierDescription(RuntimeIdentifierDescription&&);
    void parse(Json::Value &);
};
