#pragma once

class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    virtual ~ExternalFileLevelStorageSource();
    virtual void getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData &)const;
    virtual void saveLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData const&);
    virtual void getLevelList(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void createLevelStorage(Scheduler &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual bool isNewLevelIdAcceptable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void deleteLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void renameLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void renameLevel(LevelData &, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void createBackupCopyOfWorld(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual bool isConvertible(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void requiresConversion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void convertLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ProgressListener *);
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    virtual void getPathToLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getPathToLevelInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)const;

    void ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
