#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TickWorldDescription : ComponentDescription {

public:
    static long MinChunkRadius;
    static long MaxChunkRadius;
    static long MinDistToPlayers;

    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    TickWorldDescription();
};
