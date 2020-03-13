#pragma once

#include <string>
#include <memory>
#include "../bedrock/level/LevelStorageSource.h"
#include <vector>


class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    ~ExternalFileLevelStorageSource(); // _ZN30ExternalFileLevelStorageSourceD2Ev
    virtual std::string getName()const; // _ZNK30ExternalFileLevelStorageSource7getNameB5cxx11Ev
    virtual void getLevelData(std::string const&)const; // _ZNK30ExternalFileLevelStorageSource12getLevelDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getLevelData(std::string const&, LevelData &)const; // _ZNK30ExternalFileLevelStorageSource12getLevelDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER9LevelData
    virtual void saveLevelData(std::string const&, LevelData const&); // _ZN30ExternalFileLevelStorageSource13saveLevelDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK9LevelData
    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>> &); // _ZN30ExternalFileLevelStorageSource12getLevelListERSt6vectorIN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EE
    virtual void createLevelStorage(Scheduler &, std::string const&, ContentIdentity const&, IContentKeyProvider const&); // _ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK15ContentIdentityRK19IContentKeyProvider
    virtual bool isNewLevelIdAcceptable(std::string const&); // _ZN30ExternalFileLevelStorageSource22isNewLevelIdAcceptableERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void deleteLevel(std::string const&); // _ZN30ExternalFileLevelStorageSource11deleteLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void renameLevel(std::string const&, std::string const&); // _ZN30ExternalFileLevelStorageSource11renameLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void renameLevel(LevelData &, Core::Path const&, std::string const&); // _ZN30ExternalFileLevelStorageSource11renameLevelER9LevelDataRKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&); // _ZN30ExternalFileLevelStorageSource23createBackupCopyOfWorldERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual bool isConvertible(std::string const&); // _ZN30ExternalFileLevelStorageSource13isConvertibleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool requiresConversion(std::string const&); // _ZN30ExternalFileLevelStorageSource18requiresConversionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void convertLevel(std::string const&, ProgressListener *); //TODO: incomplete function definition // _ZN30ExternalFileLevelStorageSource12convertLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP16ProgressListener
    virtual bool isLevelMarkedForSync(Core::Path const&)const; // _ZNK30ExternalFileLevelStorageSource20isLevelMarkedForSyncERKN4Core4PathE
    virtual bool isLevelPartiallyCopied(Core::Path const&)const; // _ZNK30ExternalFileLevelStorageSource22isLevelPartiallyCopiedERKN4Core4PathE
    virtual std::string getLevelDatFoundPath(Core::Path const&)const; // _ZNK30ExternalFileLevelStorageSource20getLevelDatFoundPathB5cxx11ERKN4Core4PathE
    virtual std::string getBasePath()const; // _ZNK30ExternalFileLevelStorageSource11getBasePathB5cxx11Ev
    virtual void getPathToLevel(std::string const&)const; // _ZNK30ExternalFileLevelStorageSource14getPathToLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getPathToLevelInfo(std::string const&, bool)const; // _ZNK30ExternalFileLevelStorageSource18getPathToLevelInfoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>); // _ZN30ExternalFileLevelStorageSourceC2EPN4Core15FilePathManagerESt10shared_ptrI22SaveTransactionManagerE
};
