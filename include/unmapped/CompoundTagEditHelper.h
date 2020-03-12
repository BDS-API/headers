#pragma once

#include <memory>
#include <string>


class CompoundTagEditHelper {

public:
    void popChild();
    ~CompoundTagEditHelper();
    void getParent()const;
    void pushChild(std::string const&);
    void replaceWith(std::string const&, std::unique_ptr<Tag>);
    bool canPopChild();
    CompoundTagEditHelper(Tag &);
};
