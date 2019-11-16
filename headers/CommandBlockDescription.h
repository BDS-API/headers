#pragma once

class CommandBlockDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void CommandBlockDescription::~CommandBlockDescription();
    virtual void CommandBlockDescription::~CommandBlockDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
