#pragma once

#include "../../unmapped/ResourceLocation"
#include "../file/access/IFileAccess"
#include "../../core/Path"


class ZipPackAccessStrategy : PackAccessStrategy {

public:
    virtual ZipPackAccessStrategy::~ZipPackAccessStrategy()
    virtual void getPackSize()const;
    virtual void getPackLocation()const;
    virtual void getPackName()const;
    virtual bool isWritable()const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::string> const&);
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void getStrategyType()const;
    virtual void getSubPath()const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void unload();
    virtual void readContentIdentity()const;

    ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    void _tryReadFromPendingQueue(Core::Path const&, std::string &)const;
};
