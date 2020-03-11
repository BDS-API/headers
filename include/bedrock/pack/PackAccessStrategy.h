#pragma once

#include <string>
#include <functional>
#include "../../core/Path.h"


class PackAccessStrategy {

public:
    static std::string PACK_IMPORT_LOCK_FILE;

    virtual ~PackAccessStrategy();
//  virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const; //TODO: incomplete function definition
    virtual std::string getSubPath()const;
    virtual void generateAssetSet();
    virtual bool canRecurse()const;
    virtual bool hasUpgradeFiles()const;
    virtual void readContentIdentity()const;

    PackAccessStrategy();
    bool hasGeneratedAssetSet()const;
    void _isInAssetSet(Core::Path const&)const;
//  void _deleteFromAssetSet(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void _addToAssetSet(Core::Path const&);
    bool isAssetSetEmpty()const;
};
