#pragma once

#include <string>


class PageContent {

public:
    static long BLANK_PAGE;

    void getType()const;
    PageContent(std::string);
    void createTag()const;
    PageContent(PageContent &&);
    void write(PageContent const&, CompoundTag &);
    PageContent();
    void read(CompoundTag const&);
    ~PageContent();
};
