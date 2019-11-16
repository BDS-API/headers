#pragma once

class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

    virtual void ~ZipPackAccessStrategyOwningFileAcccess();
    virtual void ~ZipPackAccessStrategyOwningFileAcccess();
    virtual void getPackSize(void)const;
    virtual void getPackLocation(void)const;
    virtual void _ZNK21ZipPackAccessStrategy11getPackNameB5cxx11Ev;
    virtual void isWritable(void)const;
    virtual void setIsTrusted(bool);
    virtual void isTrusted(void)const;
    virtual void hasAsset(Core::Path const&, bool)const;
    virtual void hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    virtual void writeAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void PackAccessStrategy::forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void getStrategyType(void)const;
    virtual void _ZNK21ZipPackAccessStrategy10getSubPathB5cxx11Ev;
    virtual void createSubPack(Core::Path const&)const;
    virtual void PackAccessStrategy::generateAssetSet(void);
    virtual void PackAccessStrategy::canRecurse(void)const;
    virtual void unload(void);
    virtual void PackAccessStrategy::hasUpgradeFiles(void)const;
    virtual void readContentIdentity(void)const;
}
