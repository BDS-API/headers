#pragma once

class ExternalFileLevelStorageSource : LevelStorageSource {

    virtual void ExternalFile~ExternalFileLevelStorageSource();
    virtual void ExternalFile~ExternalFileLevelStorageSource();
    virtual void _ZNK30ExternalFileLevelStorageSource7getNameB5cxx11Ev;
    virtual void ExternalFilegetLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void ExternalFilegetLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData &)const;
    virtual void ExternalFilesaveLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData const&);
    virtual void ExternalFilegetLevelList(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void ExternalFilecreateLevelStorage(Scheduler &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual void ExternalFileisNewLevelIdAcceptable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFiledeleteLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFilerenameLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFilerenameLevel(LevelData &, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFilecreateBackupCopyOfWorld(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFileisConvertible(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFilerequiresConversion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ExternalFileconvertLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ProgressListener *);
    virtual void ExternalFileisLevelMarkedForSync(Core::Path const&)const;
    virtual void ExternalFileisLevelPartiallyCopied(Core::Path const&)const;
    virtual void _ZNK30ExternalFileLevelStorageSource20getLevelDatFoundPathB5cxx11ERKN4Core4PathE;
    virtual void _ZNK30ExternalFileLevelStorageSource11getBasePathB5cxx11Ev;
    virtual void ExternalFilegetPathToLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void ExternalFilegetPathToLevelInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void aLevelDat;
}
