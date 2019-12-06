#pragma once

class TickWorldDescription : ComponentDescription {

public:
    static long TickWorldDescription::MinChunkRadius;
    static long TickWorldDescription::MaxChunkRadius;
    static long TickWorldDescription::MinDistToPlayers;

    virtual void getJsonName(void)const;
    virtual ~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TickWorldDescription(void);
};
