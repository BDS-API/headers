#pragma once

#include <string>
#include "PackAccessStrategy.h"
#include <functional>


class DirectoryPackWithEncryptionAccessStrategy : PackAccessStrategy {

public:
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void getPackLocation()const;
    virtual void unload();
    ~DirectoryPackWithEncryptionAccessStrategy();
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual bool hasUpgradeFiles()const;
    virtual void getStrategyType()const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void getPackSize()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual void readContentIdentity()const;
    virtual std::string getPackName()const;
    virtual bool isTrusted()const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void generateAssetSet();
    virtual void setIsTrusted(bool);
    virtual bool isWritable()const;
    void _getUnencryptedAsset(Core::Path const&, std::string &)const;
    void _hasUnencryptedAsset(Core::Path const&)const;
    DirectoryPackWithEncryptionAccessStrategy(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
};
