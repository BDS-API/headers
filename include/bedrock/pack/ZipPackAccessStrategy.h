#pragma once

#include <string>
#include "PackAccessStrategy.h"
#include <functional>


class ZipPackAccessStrategy : PackAccessStrategy {

public:
    virtual bool isWritable()const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void createSubPack(Core::Path const&)const;
    virtual std::string getPackName()const;
    virtual void getPackSize()const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual bool isTrusted()const;
    virtual void unload();
    virtual void getStrategyType()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual std::string getSubPath()const;
    virtual void getPackLocation()const;
    virtual void readContentIdentity()const;
    virtual void setIsTrusted(bool);
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    ~ZipPackAccessStrategy();
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    void _tryReadFromPendingQueue(Core::Path const&, std::string &)const;
    ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&);
};
