#pragma once

#include "../bedrock/level/LevelSummary"
#include "../bedrock/level/LevelData"
#include "../core/Path"


class ExternalFileLevelStorage {

public:

    void _writeLevelDat(Core::Path const&, LevelData const&);
    void validateLevelDat(Core::Path);
    void saveLevelData(Core::Path const&, LevelData const&, bool);
    void saveLevelDataToPath(Core::Path const&, LevelData const&);
    void saveLevelDisplayDataToCache(std::string const&, LevelData const&, TaskGroup *);
    void makeReadableLevelnameFile(Core::Path const&, std::string const&);
    void readLevelDataFromData(std::string const&, LevelData &);
    void _readLevelDataFromFile(Core::Path const&, std::string const&, LevelData &);
    void readLevelDataFromFile(Core::Path const&, LevelData &);
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &);
    void readSyncFileData(Core::Path const&, std::string &, long &, long &, bool &);
    void markLevelForSync(Core::Path const&, std::string const&, unsigned long, long, bool);
    void unMarkLevelForSync(Core::Path const&, bool);
    bool isLevelMarkedForSync(Core::Path const&);
    void markLevelAsCloudSave(Core::Path const&);
    bool isLevelCloudSave(Core::Path const&);
    void copyLevelInfoToDiskCache(Core::Path const&, bool);
    void getLevelModifiedTimestamp(Core::Path const&);
};
