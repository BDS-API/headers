#pragma once

class ZipPackAccessStrategy : PackAccessStrategy {

    virtual void Zip~ZipPackAccessStrategy();
    virtual void Zip~ZipPackAccessStrategy();
    virtual void ZipgetPackSize(void)const;
    virtual void ZipgetPackLocation(void)const;
    virtual void _ZNK21ZipPackAccessStrategy11getPackNameB5cxx11Ev;
    virtual void ZipisWritable(void)const;
    virtual void ZipsetIsTrusted(bool);
    virtual void ZipisTrusted(void)const;
    virtual void ZiphasAsset(Core::Path const&, bool)const;
    virtual void ZiphasFolder(Core::Path const&)const;
    virtual void ZipgetAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void ZipdeleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    virtual void ZipwriteAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ZipforEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void ZipgetStrategyType(void)const;
    virtual void _ZNK21ZipPackAccessStrategy10getSubPathB5cxx11Ev;
    virtual void ZipcreateSubPack(Core::Path const&)const;
    virtual void generateAssetSet(void);
    virtual void canRecurse(void)const;
    virtual void Zipunload(void);
    virtual void hasUpgradeFiles(void)const;
    virtual void ZipreadContentIdentity(void)const;
}
