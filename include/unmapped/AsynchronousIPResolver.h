#pragma once

#include <string>


class AsynchronousIPResolver {

public:
    class ResolvedIp;

    ~AsynchronousIPResolver(); // _ZN22AsynchronousIPResolverD2Ev
    AsynchronousIPResolver(AsynchronousIPResolver const&); // _ZN22AsynchronousIPResolverC2ERKS_
    AsynchronousIPResolver(std::string); // _ZN22AsynchronousIPResolverC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _resolve(); // _ZN22AsynchronousIPResolver8_resolveEv
    bool isDone()const; // _ZNK22AsynchronousIPResolver6isDoneEv
    std::string getIp()const; // _ZNK22AsynchronousIPResolver5getIpB5cxx11Ev
    std::string getOriginalUrl()const; // _ZNK22AsynchronousIPResolver14getOriginalUrlB5cxx11Ev
    class ResolvedIp {

    public:
        ResolvedIp(); // _ZN22AsynchronousIPResolver10ResolvedIpC2Ev
        ~ResolvedIp(); // _ZN22AsynchronousIPResolver10ResolvedIpD2Ev
    };
};
