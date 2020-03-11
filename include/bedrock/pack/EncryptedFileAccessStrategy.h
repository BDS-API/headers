#pragma once

#include "./DirectoryPackAccessStrategy.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../core/Path.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../core/InputFileStream.h"
#include "../../unmapped/ResourceLocation.h"
#include <string>


class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
    virtual ~EncryptedFileAccessStrategy();
    virtual bool isWritable()const;
    virtual bool isTrusted()const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet();
    virtual void readContentIdentity()const;

    EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    std::string _getContentsFile();
    void _transformStream(std::string &, std::string const&, unsigned long);
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &);
    std::string _getContentsFileLocation(Core::Path const&);
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &);
    void _getContentIdentityFromEncryptedStream(std::string &, ContentIdentity &);
};
