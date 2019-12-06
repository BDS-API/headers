#pragma once

class BreakBlocksDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~BreakBlocksDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void BreakBlocksDescription(void);
};
