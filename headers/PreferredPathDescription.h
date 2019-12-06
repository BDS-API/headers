#pragma once

class PreferredPathDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~PreferredPathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void PreferredPathDescription(void);
    void PreferredPathDescription(float, float, int);
    bool isBlockAlreadyInSet(BlockLegacy const*)const;
};
