#pragma once

#include "../../core/Path.h"
#include <string>
#include "../file/access/IFileAccess.h"
#include <functional>
#include "PackAccessStrategy.h"
#include "../../unmapped/ResourceLocation.h"


class ZipPackAccessStrategy : PackAccessStrategy {

public:
    virtual void readContentIdentity()const;
    virtual void getPackLocation()const;
    virtual void writeAsset(Core::Path const&, std::string const&);
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void getStrategyType()const;
    virtual void getPackSize()const;
    virtual void setIsTrusted(bool);
    virtual std::string getPackName()const;
    virtual bool isTrusted()const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual std::string getSubPath()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void unload();
    ~ZipPackAccessStrategy();
    virtual bool isWritable()const;
    ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&);
    void _tryReadFromPendingQueue(Core::Path const&, std::string &)const;
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
};
