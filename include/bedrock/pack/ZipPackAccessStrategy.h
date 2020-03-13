#pragma once

#include <string>
#include <functional>
#include "PackAccessStrategy.h"


class ZipPackAccessStrategy : PackAccessStrategy {

public:
    ~ZipPackAccessStrategy(); // _ZN21ZipPackAccessStrategyD2Ev
    virtual void getPackSize()const; // _ZNK21ZipPackAccessStrategy11getPackSizeEv
    virtual void getPackLocation()const; // _ZNK21ZipPackAccessStrategy15getPackLocationEv
    virtual std::string getPackName()const; // _ZNK21ZipPackAccessStrategy11getPackNameB5cxx11Ev
    virtual bool isWritable()const; // _ZNK21ZipPackAccessStrategy10isWritableEv
    virtual void setIsTrusted(bool); // _ZN21ZipPackAccessStrategy12setIsTrustedEb
    virtual bool isTrusted()const; // _ZNK21ZipPackAccessStrategy9isTrustedEv
    virtual bool hasAsset(Core::Path const&, bool)const; // _ZNK21ZipPackAccessStrategy8hasAssetERKN4Core4PathEb
    virtual bool hasFolder(Core::Path const&)const; // _ZNK21ZipPackAccessStrategy9hasFolderERKN4Core4PathE
    virtual void getAsset(Core::Path const&, std::string &, bool)const; // _ZNK21ZipPackAccessStrategy8getAssetERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN21ZipPackAccessStrategy11deleteAssetERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    virtual void writeAsset(Core::Path const&, std::string const&); // _ZN21ZipPackAccessStrategy10writeAssetERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; // _ZNK21ZipPackAccessStrategy9forEachInERKN4Core4PathESt8functionIFvS3_EEb
    virtual void getStrategyType()const; // _ZNK21ZipPackAccessStrategy15getStrategyTypeEv
    virtual std::string getSubPath()const; // _ZNK21ZipPackAccessStrategy10getSubPathB5cxx11Ev
    virtual void createSubPack(Core::Path const&)const; // _ZNK21ZipPackAccessStrategy13createSubPackERKN4Core4PathE
    virtual void unload(); // _ZN21ZipPackAccessStrategy6unloadEv
    virtual void readContentIdentity()const; // _ZNK21ZipPackAccessStrategy19readContentIdentityEv
    ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&); // _ZN21ZipPackAccessStrategyC2ER11IFileAccessRK16ResourceLocationRKN4Core4PathE
    ZipPackAccessStrategy(ZipPackAccessStrategy const&); // _ZN21ZipPackAccessStrategyC2ERKS_
    void _tryReadFromPendingQueue(Core::Path const&, std::string &)const; // _ZNK21ZipPackAccessStrategy24_tryReadFromPendingQueueERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
