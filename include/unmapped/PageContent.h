#pragma once

#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class PageContent {

public:
    static long BLANK_PAGE;

    void write(PageContent const&, CompoundTag &);
    PageContent();
    ~PageContent();
    void createTag()const;
    PageContent(PageContent &&);
    PageContent(std::string);
    void getType()const;
    void read(CompoundTag const&);
};
