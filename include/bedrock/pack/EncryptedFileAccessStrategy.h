#pragma once

#include <string>
#include "DirectoryPackAccessStrategy.h"


class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
    ~EncryptedFileAccessStrategy(); // _ZN27EncryptedFileAccessStrategyD2Ev
    virtual bool isWritable()const; // _ZNK27EncryptedFileAccessStrategy10isWritableEv
    virtual bool isTrusted()const; // _ZNK27EncryptedFileAccessStrategy9isTrustedEv
    virtual bool hasAsset(Core::Path const&, bool)const; // _ZNK27EncryptedFileAccessStrategy8hasAssetERKN4Core4PathEb
    virtual void getAsset(Core::Path const&, std::string &, bool)const; // _ZNK27EncryptedFileAccessStrategy8getAssetERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN27EncryptedFileAccessStrategy11deleteAssetERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    virtual void writeAsset(Core::Path const&, std::string const&); // _ZN27EncryptedFileAccessStrategy10writeAssetERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void createSubPack(Core::Path const&)const; // _ZNK27EncryptedFileAccessStrategy13createSubPackERKN4Core4PathE
    virtual void generateAssetSet(); // _ZN27EncryptedFileAccessStrategy16generateAssetSetEv
    virtual void readContentIdentity()const; // _ZNK27EncryptedFileAccessStrategy19readContentIdentityEv
    EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool); // _ZN27EncryptedFileAccessStrategyC2ERK16ResourceLocationRK15ContentIdentityRK19IContentKeyProviderb
    std::string _getContentsFile(); // _ZN27EncryptedFileAccessStrategy16_getContentsFileB5cxx11Ev
    void _transformStream(std::string &, std::string const&, unsigned long); // _ZN27EncryptedFileAccessStrategy16_transformStreamERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_m
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &); // _ZN27EncryptedFileAccessStrategy20isValidEncryptedPackERKN4Core4PathER15ContentIdentity
    std::string _getContentsFileLocation(Core::Path const&); // _ZN27EncryptedFileAccessStrategy24_getContentsFileLocationB5cxx11ERKN4Core4PathE
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &); // _ZN27EncryptedFileAccessStrategy38_getContentIdentityFromEncryptedStreamERN4Core15InputFileStreamER15ContentIdentity
    void _getContentIdentityFromEncryptedStream(std::string &, ContentIdentity &); // _ZN27EncryptedFileAccessStrategy38_getContentIdentityFromEncryptedStreamERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER15ContentIdentity
};
