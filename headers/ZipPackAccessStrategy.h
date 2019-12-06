#pragma once

class ZipPackAccessStrategy : PackAccessStrategy {

public:
    virtual ~ZipPackAccessStrategy();
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
    virtual void getStrategyType(void)const;
    virtual void createSubPack(Core::Path const&)const;
    virtual void unload(void);
    virtual void readContentIdentity(void)const;

    void ZipPackAccessStrategy(IFileAccess &, ResourceLocation const&, Core::Path const&);
    void ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    void _tryReadFromPendingQueue(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
};
