#pragma once

class ContainerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~ContainerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void ContainerDescription(void);
};
