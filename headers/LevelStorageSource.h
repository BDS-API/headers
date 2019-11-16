#pragma once

class LevelStorageSource {

    virtual ~LevelStorageSource();
    virtual ~LevelStorageSource();
    virtual void _ZNK30LevelStorageSource7getNameB5cxx11Ev;
    virtual void getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData &)const;
    virtual void saveLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData const&);
    virtual void getLevelList(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void createLevelStorage(Scheduler &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual void isNewLevelIdAcceptable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void deleteLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void renameLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void renameLevel(LevelData &, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void createBackupCopyOfWorld(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void isConvertible(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void requiresConversion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void convertLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ProgressListener *);
    virtual void isLevelMarkedForSync(Core::Path const&)const;
    virtual void isLevelPartiallyCopied(Core::Path const&)const;
    virtual void _ZNK30LevelStorageSource20getLevelDatFoundPathB5cxx11ERKN4Core4PathE;
    virtual void _ZNK30LevelStorageSource11getBasePathB5cxx11Ev;
    virtual void getPathToLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getPathToLevelInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
}
