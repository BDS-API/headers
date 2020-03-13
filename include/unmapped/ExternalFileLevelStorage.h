#pragma once

#include <string>
#include "../core/Path.h"


namespace ExternalFileLevelStorage {

    void _writeLevelDat(Core::Path const&, LevelData const&); // _ZN24ExternalFileLevelStorage14_writeLevelDatERKN4Core4PathERK9LevelData
    void validateLevelDat(Core::Path); // _ZN24ExternalFileLevelStorage16validateLevelDatEN4Core4PathE
    void saveLevelData(Core::Path const&, LevelData const&, bool); // _ZN24ExternalFileLevelStorage13saveLevelDataERKN4Core4PathERK9LevelDatab
    void saveLevelDataToPath(Core::Path const&, LevelData const&); // _ZN24ExternalFileLevelStorage19saveLevelDataToPathERKN4Core4PathERK9LevelData
    void saveLevelDisplayDataToCache(std::string const&, LevelData const&, TaskGroup *); // _ZN24ExternalFileLevelStorage27saveLevelDisplayDataToCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK9LevelDataP9TaskGroup
    void makeReadableLevelnameFile(Core::Path const&, std::string const&); // _ZN24ExternalFileLevelStorage25makeReadableLevelnameFileERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void readLevelDataFromData(std::string const&, LevelData &); // _ZN24ExternalFileLevelStorage21readLevelDataFromDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER9LevelData
    void _readLevelDataFromFile(Core::Path const&, std::string const&, LevelData &); // _ZN24ExternalFileLevelStorage22_readLevelDataFromFileERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER9LevelData
    void readLevelDataFromFile(Core::Path const&, LevelData &); // _ZN24ExternalFileLevelStorage21readLevelDataFromFileERKN4Core4PathER9LevelData
    std::string getLevelIDFromPath(Core::Path const&); // _ZN24ExternalFileLevelStorage18getLevelIDFromPathB5cxx11ERKN4Core4PathE
    void readShallowLevelSummaryFromSyncFile(Core::Path const&, LevelSummary &); // _ZN24ExternalFileLevelStorage35readShallowLevelSummaryFromSyncFileERKN4Core4PathER12LevelSummary
    void readSyncFileData(Core::Path const&, std::string &, long &, long &, bool &); // _ZN24ExternalFileLevelStorage16readSyncFileDataERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERlSB_Rb
    void markLevelForSync(Core::Path const&, std::string const&, unsigned long, long, bool); // _ZN24ExternalFileLevelStorage16markLevelForSyncERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmlb
    void unMarkLevelForSync(Core::Path const&, bool); // _ZN24ExternalFileLevelStorage18unMarkLevelForSyncERKN4Core4PathEb
    bool isLevelMarkedForSync(Core::Path const&); // _ZN24ExternalFileLevelStorage20isLevelMarkedForSyncERKN4Core4PathE
    void markLevelAsCloudSave(Core::Path const&); // _ZN24ExternalFileLevelStorage20markLevelAsCloudSaveERKN4Core4PathE
    bool isLevelCloudSave(Core::Path const&); // _ZN24ExternalFileLevelStorage16isLevelCloudSaveERKN4Core4PathE
    void copyLevelInfoToDiskCache(Core::Path const&, bool); // _ZN24ExternalFileLevelStorage24copyLevelInfoToDiskCacheERKN4Core4PathEb
    void getLevelModifiedTimestamp(Core::Path const&); // _ZN24ExternalFileLevelStorage25getLevelModifiedTimestampERKN4Core4PathE
    std::string getImportantFiles(); // _ZN24ExternalFileLevelStorage17getImportantFilesB5cxx11Ev
};
