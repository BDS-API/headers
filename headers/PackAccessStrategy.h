#pragma once

class PackAccessStrategy {

public:
    virtual ~PackAccessStrategy();
    virtual void forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void generateAssetSet(void);
    virtual bool canRecurse(void)const;
    virtual bool hasUpgradeFiles(void)const;
    virtual void readContentIdentity(void)const;

    void PackAccessStrategy(void);
    bool hasGeneratedAssetSet(void)const;
    void _isInAssetSet(Core::Path const&)const;
    void _deleteFromAssetSet(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    void _addToAssetSet(Core::Path const&);
    bool isAssetSetEmpty(void)const;
};
