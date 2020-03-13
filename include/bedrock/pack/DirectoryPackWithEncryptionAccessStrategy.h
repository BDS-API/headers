#pragma once

#include <string>
#include <functional>
#include "PackAccessStrategy.h"


class DirectoryPackWithEncryptionAccessStrategy : PackAccessStrategy {

public:
    ~DirectoryPackWithEncryptionAccessStrategy(); // _ZN41DirectoryPackWithEncryptionAccessStrategyD2Ev
    virtual void getPackSize()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy11getPackSizeEv
    virtual void getPackLocation()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy15getPackLocationEv
    virtual std::string getPackName()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy11getPackNameB5cxx11Ev
    virtual bool isWritable()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy10isWritableEv
    virtual void setIsTrusted(bool); // _ZN41DirectoryPackWithEncryptionAccessStrategy12setIsTrustedEb
    virtual bool isTrusted()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy9isTrustedEv
    virtual bool hasAsset(Core::Path const&, bool)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy8hasAssetERKN4Core4PathEb
    virtual bool hasFolder(Core::Path const&)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy9hasFolderERKN4Core4PathE
    virtual void getAsset(Core::Path const&, std::string &, bool)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy8getAssetERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN41DirectoryPackWithEncryptionAccessStrategy11deleteAssetERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    virtual void writeAsset(Core::Path const&, std::string const&); // _ZN41DirectoryPackWithEncryptionAccessStrategy10writeAssetERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy9forEachInERKN4Core4PathESt8functionIFvS3_EEb
    virtual void getStrategyType()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy15getStrategyTypeEv
    virtual void createSubPack(Core::Path const&)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy13createSubPackERKN4Core4PathE
    virtual void generateAssetSet(); // _ZN41DirectoryPackWithEncryptionAccessStrategy16generateAssetSetEv
    virtual void unload(); // _ZN41DirectoryPackWithEncryptionAccessStrategy6unloadEv
    virtual bool hasUpgradeFiles()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy15hasUpgradeFilesEv
    virtual void readContentIdentity()const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy19readContentIdentityEv
    DirectoryPackWithEncryptionAccessStrategy(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&); // _ZN41DirectoryPackWithEncryptionAccessStrategyC2ERK16ResourceLocationS2_RK19IContentKeyProvider
    void _getUnencryptedAsset(Core::Path const&, std::string &)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy20_getUnencryptedAssetERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _hasUnencryptedAsset(Core::Path const&)const; // _ZNK41DirectoryPackWithEncryptionAccessStrategy20_hasUnencryptedAssetERKN4Core4PathE
};
