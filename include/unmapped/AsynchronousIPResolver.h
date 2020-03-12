#pragma once

#include <string>


class AsynchronousIPResolver {

public:
    class ResolvedIp;

    std::string getIp()const;
    std::string getOriginalUrl()const;
    AsynchronousIPResolver(std::string);
    ~AsynchronousIPResolver();
    void _resolve();
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    bool isDone()const;
    class ResolvedIp {

    public:
        ResolvedIp();
        ~ResolvedIp();
    };
};
