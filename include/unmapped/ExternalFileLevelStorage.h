#pragma once

#include "../bedrock/level/LevelData.h"
#include <string>
#include "../core/Path.h"
#include "TaskGroup.h"
#include "../bedrock/level/LevelSummary.h"


namespace ExternalFileLevelStorage {

    void _writeLevelDat(Core::Path const&, LevelData const&);
    void readLevelDataFromFile(Core::Path const&, LevelData &);
    void markLevelAsCloudSave(Core::Path const&);
    void makeReadableLevelnameFile(Core::Path const&, std::string const&);
    void _readLevelDataFromFile(Core::Path const&, std::string const&, LevelData &);
    void validateLevelDat(Core::Path);
    void readLevelDataFromData(std::string const&, LevelData &);
    bool isLevelCloudSave(Core::Path const&);
    void saveLevelDisplayDataToCache(std::string const&, LevelData const&, TaskGroup *);
    bool isLevelMarkedForSync(Core::Path const&);
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &);
    void markLevelForSync(Core::Path const&, std::string const&, unsigned long, long, bool);
    void readSyncFileData(Core::Path const&, std::string &, long &, long &, bool &);
    void unMarkLevelForSync(Core::Path const&, bool);
    void saveLevelDataToPath(Core::Path const&, LevelData const&);
    void saveLevelData(Core::Path const&, LevelData const&, bool);
    void copyLevelInfoToDiskCache(Core::Path const&, bool);
    void getLevelModifiedTimestamp(Core::Path const&);
    std::string getImportantFiles();
    std::string getLevelIDFromPath(Core::Path const&);
};
