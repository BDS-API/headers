#pragma once

#include <string>


class FeedItem {

public:
    class Effect;

    void setItem(std::string const&);
    FeedItem(FeedItem const&);
    FeedItem();
    FeedItem(FeedItem &&);
    void addEffect(FeedItem::Effect const&);
    ~FeedItem();
    class Effect {

    public:
        Effect(FeedItem::Effect &&);
        Effect(FeedItem::Effect const&);
        Effect();
        ~Effect();
    };
};
