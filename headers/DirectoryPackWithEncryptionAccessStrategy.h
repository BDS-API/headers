#pragma once

class DirectoryPackWithEncryptionAccessStrategy : PackAccessStrategy {

public:
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
    virtual void getPackSize(void)const;
    virtual void getPackLocation(void)const;
    virtual bool isWritable(void)const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted(void)const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::string> const&);
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void getStrategyType(void)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet(void);
    virtual void unload(void);
    virtual bool hasUpgradeFiles(void)const;
    virtual void readContentIdentity(void)const;

    void DirectoryPackWithEncryptionAccessStrategy(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void _getUnencryptedAsset(Core::Path const&, std::string &)const;
    void _hasUnencryptedAsset(Core::Path const&)const;
};
