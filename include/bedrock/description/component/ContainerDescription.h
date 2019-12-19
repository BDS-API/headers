#pragma once

class ContainerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ContainerDescription::~ContainerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ContainerDescription(void);
};
