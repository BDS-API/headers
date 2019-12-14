#pragma once

class FeedItem {

public:

    void setItem(std::string const&);
    void addEffect(FeedItem::Effect const&);
    void FeedItem(void);
    void FeedItem(FeedItem const&);
    void FeedItem(FeedItem&&);
};
