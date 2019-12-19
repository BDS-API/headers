#pragma once

class TickWorldDescription : ComponentDescription {

public:
    static long MinChunkRadius;
    static long MaxChunkRadius;
    static long MinDistToPlayers;

    virtual void getJsonName(void)const;
    virtual TickWorldDescription::~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TickWorldDescription(void);
};
