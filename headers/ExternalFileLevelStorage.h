#pragma once

class ExternalFileLevelStorage {

public:

    void _writeLevelDat(Core::Path const&, LevelData const&);
    void validateLevelDat(Core::Path);
    void saveLevelData(Core::Path const&, LevelData const&);
    void makeReadableLevelnameFile(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void readLevelDataFromData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData &);
    void _readLevelDataFromFile(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelData &);
    void readLevelDataFromFile(Core::Path const&, LevelData &);
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &);
    void readSyncFileData(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, long &, long &, bool &);
    void markLevelForSync(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, long, bool);
    void unMarkLevelForSync(Core::Path const&, bool);
    bool isLevelMarkedForSync(Core::Path const&);
    void markLevelAsCloudSave(Core::Path const&);
    bool isLevelCloudSave(Core::Path const&);
    void copyLevelInfoToDiskCache(Core::Path const&);
    void getLevelModifiedTimestamp(Core::Path const&);
};
