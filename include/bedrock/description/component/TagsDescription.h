#pragma once

class TagsDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TagsDescription::~TagsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TagsDescription(void);
};
