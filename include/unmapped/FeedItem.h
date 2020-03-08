#pragma once



class FeedItem {

public:

    void setItem(std::string const&);
    void addEffect(FeedItem::Effect const&);
    FeedItem(void);
    FeedItem(FeedItem const&);
    FeedItem(FeedItem&&);
};
