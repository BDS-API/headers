#pragma once

#include "ComponentDescription.h"


class TickWorldDescription : ComponentDescription {

public:
    static long MinChunkRadius;
    static long MaxChunkRadius;
    static long MinDistToPlayers;

    virtual void getJsonName()const;
    ~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    TickWorldDescription();
};
