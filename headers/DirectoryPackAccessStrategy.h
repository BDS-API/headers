#pragma once

class DirectoryPackAccessStrategy : PackAccessStrategy {

    virtual void Directory~DirectoryPackAccessStrategy();
    virtual void Directory~DirectoryPackAccessStrategy();
    virtual void DirectorygetPackSize(void)const;
    virtual void DirectorygetPackLocation(void)const;
    virtual void _ZNK27DirectoryPackAccessStrategy11getPackNameB5cxx11Ev;
    virtual void DirectoryisWritable(void)const;
    virtual void DirectorysetIsTrusted(bool);
    virtual void DirectoryisTrusted(void)const;
    virtual void DirectoryhasAsset(Core::Path const&, bool)const;
    virtual void DirectoryhasFolder(Core::Path const&)const;
    virtual void DirectorygetAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void DirectorydeleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    virtual void DirectorywriteAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void DirectoryforEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void DirectoryforEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void DirectorygetStrategyType(void)const;
    virtual void _ZNK18PackAccessStrategy10getSubPathB5cxx11Ev;
    virtual void DirectorycreateSubPack(Core::Path const&)const;
    virtual void generateAssetSet(void);
    virtual void DirectorycanRecurse(void)const;
    virtual void Directoryunload(void);
    virtual void hasUpgradeFiles(void)const;
    virtual void readContentIdentity(void)const;
}
