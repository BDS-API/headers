#pragma once

#include "../../core/Path.h"
#include <string>
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include "PackAccessStrategy.h"
#include "../../unmapped/ResourceLocation.h"


class DirectoryPackWithEncryptionAccessStrategy : PackAccessStrategy {

public:
    ~DirectoryPackWithEncryptionAccessStrategy();
    virtual void getStrategyType()const;
    virtual bool isWritable()const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void getPackLocation()const;
    virtual void generateAssetSet();
    virtual void readContentIdentity()const;
    virtual std::string getPackName()const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void unload();
    virtual void createSubPack(Core::Path const&)const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted()const;
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void getPackSize()const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual bool hasUpgradeFiles()const;
    void _hasUnencryptedAsset(Core::Path const&)const;
    DirectoryPackWithEncryptionAccessStrategy(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void _getUnencryptedAsset(Core::Path const&, std::string &)const;
};
