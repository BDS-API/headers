#pragma once

#include <string>
#include <functional>


class PackAccessStrategy {

public:
    static std::string PACK_IMPORT_LOCK_FILE;

    ~PackAccessStrategy(); // _ZN18PackAccessStrategyD2Ev
    virtual void forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>)const; // _ZNK18PackAccessStrategy17forEachInAssetSetERKN4Core4PathESt8functionIFvS3_EE
    virtual std::string getSubPath()const; // _ZNK18PackAccessStrategy10getSubPathB5cxx11Ev
    virtual void generateAssetSet(); // _ZN18PackAccessStrategy16generateAssetSetEv
    virtual bool canRecurse()const; // _ZNK18PackAccessStrategy10canRecurseEv
    virtual bool hasUpgradeFiles()const; // _ZNK18PackAccessStrategy15hasUpgradeFilesEv
    virtual void readContentIdentity()const; // _ZNK18PackAccessStrategy19readContentIdentityEv
    PackAccessStrategy(); // _ZN18PackAccessStrategyC2Ev
    bool hasGeneratedAssetSet()const; // _ZNK18PackAccessStrategy20hasGeneratedAssetSetEv
    void _isInAssetSet(Core::Path const&)const; // _ZNK18PackAccessStrategy13_isInAssetSetERKN4Core4PathE
//  void _deleteFromAssetSet(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN18PackAccessStrategy19_deleteFromAssetSetERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    void _addToAssetSet(Core::Path const&); // _ZN18PackAccessStrategy14_addToAssetSetERKN4Core4PathE
    bool isAssetSetEmpty()const; // _ZNK18PackAccessStrategy15isAssetSetEmptyEv
};
