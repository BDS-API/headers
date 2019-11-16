#pragma once

class TickWorldDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TickWorldDescription();
    virtual ~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
