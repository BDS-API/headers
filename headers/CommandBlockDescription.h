#pragma once

class CommandBlockDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~CommandBlockDescription();
    virtual ~CommandBlockDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
