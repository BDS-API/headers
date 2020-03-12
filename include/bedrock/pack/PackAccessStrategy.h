#pragma once

#include "../../core/Path.h"
#include <functional>
#include <string>


class PackAccessStrategy {

public:
    static std::string PACK_IMPORT_LOCK_FILE;

    virtual std::string getSubPath()const;
    virtual bool canRecurse()const;
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const;
    ~PackAccessStrategy();
    virtual bool hasUpgradeFiles()const;
    virtual void generateAssetSet();
    virtual void readContentIdentity()const;
    bool isAssetSetEmpty()const;
    bool hasGeneratedAssetSet()const;
    PackAccessStrategy();
//  void _deleteFromAssetSet(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void _isInAssetSet(Core::Path const&)const;
    void _addToAssetSet(Core::Path const&);
};
