#pragma once

class ContainerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~ContainerDescription();
    virtual ~ContainerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
