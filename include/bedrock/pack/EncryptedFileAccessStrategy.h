#pragma once

#include "../../unmapped/ResourceLocation"
#include "../../unmapped/ContentIdentity"
#include "../../unmapped/IContentKeyProvider"
#include "../../core/InputFileStream"
#include "../../core/Path"


class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
    virtual EncryptedFileAccessStrategy::~EncryptedFileAccessStrategy()
    virtual bool isWritable()const;
    virtual bool isTrusted()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::string> const&);
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet();
    virtual void readContentIdentity()const;

    EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void _transformStream(std::string &, std::string const&, unsigned long);
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &);
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &);
    void _getContentIdentityFromEncryptedStream(std::string &, ContentIdentity &);
};
