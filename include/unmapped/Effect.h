#pragma once

#include "./Effect.h"


namespace FeedItem {

class Effect {

public:

    ~Effect();
    Effect(FeedItem::Effect const&);
    Effect(FeedItem::Effect &&);
    Effect();
};

}