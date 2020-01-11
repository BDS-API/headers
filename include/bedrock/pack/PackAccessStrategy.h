#pragma once

class PackAccessStrategy {

public:
    static long PACK_IMPORT_LOCK_FILE[abi:cxx11];

    virtual PackAccessStrategy::~PackAccessStrategy();
    virtual void forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void getSubPath[abi:cxx11](void)const;
    virtual void generateAssetSet(void);
    virtual bool canRecurse(void)const;
    virtual bool hasUpgradeFiles(void)const;
    virtual void readContentIdentity(void)const;

    PackAccessStrategy(void);
    bool hasGeneratedAssetSet(void)const;
    void _isInAssetSet(Core::Path const&)const;
    void _deleteFromAssetSet(Core::PathBuffer<std::string> const&);
    void _addToAssetSet(Core::Path const&);
    bool isAssetSetEmpty(void)const;
};
