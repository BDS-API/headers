#pragma once

#include <string>
#include "PackAccessStrategy.h"
#include <functional>


class DirectoryPackAccessStrategy : PackAccessStrategy {

public:
    virtual std::string getPackName()const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual bool isTrusted()const;
    virtual void getStrategyType()const;
    virtual bool canRecurse()const;
    virtual void setIsTrusted(bool);
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getPackLocation()const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void unload();
    ~DirectoryPackAccessStrategy();
    virtual bool isWritable()const;
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void getPackSize()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const;
    DirectoryPackAccessStrategy(ResourceLocation const&, bool);
};
