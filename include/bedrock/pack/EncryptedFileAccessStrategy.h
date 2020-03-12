#pragma once

#include "../../core/Path.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../core/InputFileStream.h"
#include <string>
#include "DirectoryPackAccessStrategy.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/ResourceLocation.h"


class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual bool isWritable()const;
    virtual void readContentIdentity()const;
    ~EncryptedFileAccessStrategy();
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet();
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual bool isTrusted()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    void _getContentIdentityFromEncryptedStream(std::string &, ContentIdentity &);
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &);
    void _transformStream(std::string &, std::string const&, unsigned long);
    std::string _getContentsFileLocation(Core::Path const&);
    EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &);
    std::string _getContentsFile();
};
