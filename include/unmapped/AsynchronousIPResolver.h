#pragma once

#include <string>


class AsynchronousIPResolver {

public:
    class ResolvedIp;

    std::string getOriginalUrl()const;
    void _resolve();
    ~AsynchronousIPResolver();
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    std::string getIp()const;
    bool isDone()const;
    AsynchronousIPResolver(std::string);
    class ResolvedIp {

    public:
        ResolvedIp();
        ~ResolvedIp();
    };
};
