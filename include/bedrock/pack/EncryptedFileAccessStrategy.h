#pragma once

#include <string>
#include "DirectoryPackAccessStrategy.h"


class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    virtual void generateAssetSet();
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void writeAsset(Core::Path const&, std::string const&);
    virtual void readContentIdentity()const;
    virtual void getAsset(Core::Path const&, std::string &, bool)const;
    virtual void createSubPack(Core::Path const&)const;
    ~EncryptedFileAccessStrategy();
    virtual bool isWritable()const;
    virtual bool isTrusted()const;
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &);
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &);
    std::string _getContentsFile();
    std::string _getContentsFileLocation(Core::Path const&);
    void _transformStream(std::string &, std::string const&, unsigned long);
    EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void _getContentIdentityFromEncryptedStream(std::string &, ContentIdentity &);
};
