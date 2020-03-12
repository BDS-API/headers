#pragma once

#include <string>


class FeedItem {

public:
    class Effect;

    void setItem(std::string const&);
    FeedItem(FeedItem &&);
    void addEffect(FeedItem::Effect const&);
    ~FeedItem();
    FeedItem(FeedItem const&);
    FeedItem();
    class Effect {

    public:
        Effect(FeedItem::Effect &&);
        Effect();
        Effect(FeedItem::Effect const&);
        ~Effect();
    };
};
