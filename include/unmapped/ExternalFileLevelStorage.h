#pragma once

#include "../core/Path.h"
#include "../bedrock/level/LevelSummary.h"
#include "./TaskGroup.h"
#include "../bedrock/level/LevelData.h"
#include <string>


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
    std::string getLevelIDFromPath(Core::Path const&);
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &);
    void readSyncFileData(Core::Path const&, std::string &, long &, long &, bool &);
    void markLevelForSync(Core::Path const&, std::string const&, unsigned long, long, bool);
    void unMarkLevelForSync(Core::Path const&, bool);
    bool isLevelMarkedForSync(Core::Path const&);
    void markLevelAsCloudSave(Core::Path const&);
    bool isLevelCloudSave(Core::Path const&);
    void copyLevelInfoToDiskCache(Core::Path const&, bool);
    void getLevelModifiedTimestamp(Core::Path const&);
    std::string getImportantFiles();
};
