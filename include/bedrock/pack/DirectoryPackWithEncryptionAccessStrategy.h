#pragma once

#include "../../unmapped/ResourceLocation"
#include "../../unmapped/IContentKeyProvider"
#include "../../core/Path"


class DirectoryPackWithEncryptionAccessStrategy : PackAccessStrategy {

public:
    virtual DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy()
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
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet();
    virtual void unload();
    virtual bool hasUpgradeFiles()const;
    virtual void readContentIdentity()const;

    DirectoryPackWithEncryptionAccessStrategy(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void _getUnencryptedAsset(Core::Path const&, std::string &)const;
    void _hasUnencryptedAsset(Core::Path const&)const;
};
