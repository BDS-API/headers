#pragma once

#include <string>
#include <functional>


class PackAccessStrategy {

public:
    static std::string PACK_IMPORT_LOCK_FILE;

    virtual void readContentIdentity()const;
    virtual bool canRecurse()const;
    virtual bool hasUpgradeFiles()const;
    virtual void generateAssetSet();
    ~PackAccessStrategy();
    virtual std::string getSubPath()const;
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const;
    bool hasGeneratedAssetSet()const;
    void _addToAssetSet(Core::Path const&);
//  void _deleteFromAssetSet(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    bool isAssetSetEmpty()const;
    void _isInAssetSet(Core::Path const&)const;
    PackAccessStrategy();
};
