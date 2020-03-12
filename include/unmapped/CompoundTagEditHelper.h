#pragma once

#include "../bedrock/nbt/Tag.h"
#include <string>
#include <memory>


class CompoundTagEditHelper {

public:
    CompoundTagEditHelper(Tag &);
    void getParent()const;
    bool canPopChild();
    void popChild();
    void replaceWith(std::string const&, std::unique_ptr<Tag>);
    ~CompoundTagEditHelper();
    void pushChild(std::string const&);
};
