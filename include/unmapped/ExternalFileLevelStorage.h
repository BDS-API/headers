#pragma once

#include <string>
#include "../core/Path.h"


namespace ExternalFileLevelStorage {

    void readLevelDataFromFile(Core::Path const&, LevelData &);
    void readSyncFileData(Core::Path const&, std::string &, long &, long &, bool &);
    void _writeLevelDat(Core::Path const&, LevelData const&);
    void validateLevelDat(Core::Path);
    void _readLevelDataFromFile(Core::Path const&, std::string const&, LevelData &);
    void getLevelModifiedTimestamp(Core::Path const&);
    std::string getImportantFiles();
    void saveLevelDataToPath(Core::Path const&, LevelData const&);
    void markLevelForSync(Core::Path const&, std::string const&, unsigned long, long, bool);
    void saveLevelDisplayDataToCache(std::string const&, LevelData const&, TaskGroup *);
    bool isLevelMarkedForSync(Core::Path const&);
    void readLevelDataFromData(std::string const&, LevelData &);
    void copyLevelInfoToDiskCache(Core::Path const&, bool);
    void saveLevelData(Core::Path const&, LevelData const&, bool);
    void unMarkLevelForSync(Core::Path const&, bool);
    std::string getLevelIDFromPath(Core::Path const&);
    void markLevelAsCloudSave(Core::Path const&);
    bool isLevelCloudSave(Core::Path const&);
    void makeReadableLevelnameFile(Core::Path const&, std::string const&);
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &);
};
