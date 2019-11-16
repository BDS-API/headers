#pragma once

class BreakBlocksDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~BreakBlocksDescription();
    virtual ~BreakBlocksDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
