#pragma once

class IsSpawnableDescription : DefintionDescription {

public:
    virtual ~IsSpawnableDescription();
    virtual void getJsonName(void)const;

    void IsSpawnableDescription(void);
    void IsSpawnableDescription(IsSpawnableDescription&&);
    void parse(Json::Value &);
};
