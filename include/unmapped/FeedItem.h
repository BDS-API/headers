#pragma once

#include "./Effect.h"
#include "./FeedItem.h"
#include <string>


class FeedItem {

public:

    ~FeedItem();
    void setItem(std::string const&);
    void addEffect(FeedItem::Effect const&);
    FeedItem();
    FeedItem(FeedItem const&);
    FeedItem(FeedItem &&);
};
