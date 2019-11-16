#pragma once

class ContainerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~ContainerDescription();
    virtual void ~ContainerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
