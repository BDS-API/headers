#pragma once

class FootSizeDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~FootSizeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void FootSizeDescription(void);
};
