#pragma once

#include <string>
#include <functional>
#include "PackAccessStrategy.h"


class DirectoryPackAccessStrategy : PackAccessStrategy {

public:
    ~DirectoryPackAccessStrategy(); // _ZN27DirectoryPackAccessStrategyD2Ev
    virtual void getPackSize()const; // _ZNK27DirectoryPackAccessStrategy11getPackSizeEv
    virtual void getPackLocation()const; // _ZNK27DirectoryPackAccessStrategy15getPackLocationEv
    virtual std::string getPackName()const; // _ZNK27DirectoryPackAccessStrategy11getPackNameB5cxx11Ev
    virtual bool isWritable()const; // _ZNK27DirectoryPackAccessStrategy10isWritableEv
    virtual void setIsTrusted(bool); // _ZN27DirectoryPackAccessStrategy12setIsTrustedEb
    virtual bool isTrusted()const; // _ZNK27DirectoryPackAccessStrategy9isTrustedEv
    virtual bool hasAsset(Core::Path const&, bool)const; // _ZNK27DirectoryPackAccessStrategy8hasAssetERKN4Core4PathEb
    virtual bool hasFolder(Core::Path const&)const; // _ZNK27DirectoryPackAccessStrategy9hasFolderERKN4Core4PathE
    virtual void getAsset(Core::Path const&, std::string &, bool)const; // _ZNK27DirectoryPackAccessStrategy8getAssetERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void deleteAsset(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN27DirectoryPackAccessStrategy11deleteAssetERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    virtual void writeAsset(Core::Path const&, std::string const&); // _ZN27DirectoryPackAccessStrategy10writeAssetERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; // _ZNK27DirectoryPackAccessStrategy9forEachInERKN4Core4PathESt8functionIFvS3_EEb
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const; // _ZNK27DirectoryPackAccessStrategy17forEachInAssetSetERKN4Core4PathESt8functionIFvS3_EE
    virtual void getStrategyType()const; // _ZNK27DirectoryPackAccessStrategy15getStrategyTypeEv
    virtual void createSubPack(Core::Path const&)const; // _ZNK27DirectoryPackAccessStrategy13createSubPackERKN4Core4PathE
    virtual bool canRecurse()const; // _ZNK27DirectoryPackAccessStrategy10canRecurseEv
    virtual void unload(); // _ZN27DirectoryPackAccessStrategy6unloadEv
    DirectoryPackAccessStrategy(ResourceLocation const&, bool); // _ZN27DirectoryPackAccessStrategyC2ERK16ResourceLocationb
};
