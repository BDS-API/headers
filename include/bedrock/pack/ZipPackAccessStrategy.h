#pragma once

#include "./PackAccessStrategy.h"
#include "../../core/Path.h"
#include "../file/access/IFileAccess.h"
#include "../../unmapped/ResourceLocation.h"
#include <functional>
#include "./ZipPackAccessStrategy.h"
#include <string>


class ZipPackAccessStrategy : PackAccessStrategy {

public:
    virtual ~ZipPackAccessStrategy();
    virtual void getPackSize()const;
    virtual void getPackLocation()const;
    virtual std::string getPackName()const;
    virtual bool isWritable()const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void writeAsset(Core::Path const&, std::string const&);
//  virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; //TODO: incomplete function definition
    virtual void getStrategyType()const;
    virtual std::string getSubPath()const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void unload();
    virtual void readContentIdentity()const;

    ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    void _tryReadFromPendingQueue(Core::Path const&, std::string &)const;
};
