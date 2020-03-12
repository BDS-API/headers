#pragma once

#include "../../core/Path.h"
#include <string>
#include <functional>
#include "PackAccessStrategy.h"
#include "../../unmapped/ResourceLocation.h"


class DirectoryPackAccessStrategy : PackAccessStrategy {

public:
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const;
    virtual bool canRecurse()const;
    virtual std::string getPackName()const;
    ~DirectoryPackAccessStrategy();
    virtual void getPackSize()const;
    virtual bool isTrusted()const;
    virtual void getPackLocation()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual bool isWritable()const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual void setIsTrusted(bool);
    virtual void getStrategyType()const;
    virtual void unload();
    virtual void createSubPack(Core::Path const&)const;
    virtual void writeAsset(Core::Path const&, std::string const&);
    DirectoryPackAccessStrategy(ResourceLocation const&, bool);
};
