#pragma once

#include <memory>
#include "../bedrock/nbt/Tag.h"
#include <string>


class CompoundTagEditHelper {

public:

    CompoundTagEditHelper(Tag &);
    void replaceWith(std::string const&, std::unique_ptr<Tag, std::default_delete<Tag>>);
    void pushChild(std::string const&);
    void popChild();
    bool canPopChild();
    void getParent()const;
    ~CompoundTagEditHelper();
};
