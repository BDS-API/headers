#pragma once

class EncryptedFileAccessStrategy : DirectoryPackAccessStrategy {

public:
    virtual ~EncryptedFileAccessStrategy();
    virtual bool isWritable(void)const;
    virtual bool isTrusted(void)const;
    virtual bool hasAsset(Core::Path const&, bool)const;
    virtual void getAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void deleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    virtual void writeAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void createSubPack(Core::Path const&)const;
    virtual void generateAssetSet(void);
    virtual void readContentIdentity(void)const;

    void EncryptedFileAccessStrategy(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void _transformStream(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    bool isValidEncryptedPack(Core::Path const&, ContentIdentity &);
    void _getContentIdentityFromEncryptedStream(Core::InputFileStream &, ContentIdentity &);
    void _getContentIdentityFromEncryptedStream(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, ContentIdentity &);
};
