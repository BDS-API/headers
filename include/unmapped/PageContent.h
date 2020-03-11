#pragma once

#include "./PageContent.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class PageContent {

public:
    static long BLANK_PAGE;


    ~PageContent();
    PageContent(std::string);
    PageContent();
    PageContent(PageContent &&);
    void read(CompoundTag const&);
    void write(PageContent const&, CompoundTag &);
    void createTag()const;
    void getType()const;
};
