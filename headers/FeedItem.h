#pragma once

class FeedItem {

public:

    void setItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addEffect(FeedItem::Effect const&);
    void FeedItem(void);
    void FeedItem(FeedItem const&);
    void FeedItem(FeedItem&&);
};
