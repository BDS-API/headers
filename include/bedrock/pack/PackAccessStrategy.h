#pragma once

#include "../../core/Path"


class PackAccessStrategy {

public:
    static long PACK_IMPORT_LOCK_FILE[abi:cxx11];

    virtual PackAccessStrategy::~PackAccessStrategy()
    virtual void forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void getSubPath()const;
    virtual void generateAssetSet();
    virtual bool canRecurse()const;
    virtual bool hasUpgradeFiles()const;
    virtual void readContentIdentity()const;

    PackAccessStrategy(void);
    bool hasGeneratedAssetSet()const;
    void _isInAssetSet(Core::Path const&)const;
    void _deleteFromAssetSet(Core::PathBuffer<std::string> const&);
    void _addToAssetSet(Core::Path const&);
    bool isAssetSetEmpty()const;
};
