#pragma once

#include "./AsynchronousIPResolver.h"
#include <string>


class AsynchronousIPResolver {

public:

    ~AsynchronousIPResolver();
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver(std::string);
    void _resolve();
    bool isDone()const;
    std::string getIp()const;
    std::string getOriginalUrl()const;
};
