#pragma once

class DirectoryPackAccessStrategy : PackAccessStrategy {

public:
    virtual ~DirectoryPackAccessStrategy();
    virtual void getPackSize(void)const;
    virtual void getPackLocation(void)const;
    virtual bool isWritable(void)const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted(void)const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual bool hasFolder(Core::Path const&)const;
    virtual void getAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    virtual void writeAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    virtual void forEachInAssetSet(Core::Path const&, std::function<void ()(Core::Path const&)>)const;
    virtual void getStrategyType(void)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual bool canRecurse(void)const;
    virtual void unload(void);

    void DirectoryPackAccessStrategy(ResourceLocation const&, bool);
};
