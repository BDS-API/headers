#pragma once

#include "../../../unmapped/DBStorageConfig.h"
#include "LevelStorage.h"
#include <memory>
#include "../../../unmapped/TaskResult.h"
#include <string>
#include <functional>
#include <atomic>


class DBStorage : LevelStorage {

public:
    class DBStorageToken;
    class Options;
    class PendingWrite;

    ~DBStorage(); // _ZN9DBStorageD2Ev
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>); // _ZN9DBStorage18addStorageObserverESt10unique_ptrI20LevelStorageObserverSt14default_deleteIS1_EE
    virtual void getCompoundTag(std::string const&); // _ZN9DBStorage14getCompoundTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK9DBStorage6hasKeyEN3gsl17basic_string_spanIKcLln1EEE
//  virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition // _ZNK9DBStorage20forEachKeyWithPrefixEN3gsl17basic_string_spanIKcLln1EEERKSt8functionIFvS3_S3_EE
    virtual void loadLevelData(LevelData &); // _ZN9DBStorage13loadLevelDataER9LevelData
//  virtual void createChunkStorage(std::unique_ptr<ChunkSource>, StorageVersion); //TODO: incomplete function definition // _ZN9DBStorage18createChunkStorageESt10unique_ptrI11ChunkSourceSt14default_deleteIS1_EE14StorageVersion
    virtual void saveLevelData(LevelData const&); // _ZN9DBStorage13saveLevelDataERK9LevelData
    virtual std::string getFullPath()const; // _ZNK9DBStorage11getFullPathB5cxx11Ev
    virtual void saveData(std::string const&, std::string &&); // _ZN9DBStorage8saveDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOS5_
    virtual void createWriteBatch(); // _ZN9DBStorage16createWriteBatchEv
    virtual void deleteData(std::string const&); // _ZN9DBStorage10deleteDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void syncIO(); // _ZN9DBStorage6syncIOEv
    virtual void getStatistics(std::string &)const; // _ZNK9DBStorage13getStatisticsERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isCorrupted()const; // _ZNK9DBStorage11isCorruptedEv
    virtual void startShutdown(); // _ZN9DBStorage13startShutdownEv
    virtual void checkShutdownDone(); // _ZN9DBStorage17checkShutdownDoneEv
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition // _ZNK9DBStorage8loadDataEN3gsl17basic_string_spanIKcLln1EEERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getState()const; // _ZNK9DBStorage8getStateEv
    virtual void createSnapshot(std::string const&); // _ZN9DBStorage14createSnapshotERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void releaseSnapshot(); // _ZN9DBStorage15releaseSnapshotEv
    virtual void compactStorage(); // _ZN9DBStorage14compactStorageEv
    virtual void syncAndSuspendStorage(); // _ZN9DBStorage21syncAndSuspendStorageEv
    virtual void resumeStorage(); // _ZN9DBStorage13resumeStorageEv
    virtual void setFlushAllowed(bool); // _ZN9DBStorage15setFlushAllowedEb
    virtual void flushToPermanentStorage(); // _ZN9DBStorage23flushToPermanentStorageEv
    virtual void freeCaches(); // _ZN9DBStorage10freeCachesEv
    virtual void setCompactionCallback(std::function<void (CompactionStatus)>); // _ZN9DBStorage21setCompactionCallbackESt8functionIFv16CompactionStatusEE
    virtual void setCriticalSyncSaveCallback(std::function<void (void)>); // _ZN9DBStorage27setCriticalSyncSaveCallbackESt8functionIFvvEE
    virtual void corruptLevel(); // _ZN9DBStorage12corruptLevelEv
//  virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&); //TODO: incomplete function definition // _ZN9DBStorage13_saveDataSyncEN3gsl17basic_string_spanIKcLln1EEEONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tryRepair(Core::Path const&)const; // _ZNK9DBStorage9tryRepairERKN4Core4PathE
    DBStorage(DBStorageConfig); // _ZN9DBStorageC2E15DBStorageConfig
    void _isMarkedAsCorrupted()const; // _ZNK9DBStorage20_isMarkedAsCorruptedEv
    void _removeCorruptedMark()const; // _ZNK9DBStorage20_removeCorruptedMarkEv
//  std::string _getTelemetryMessage(leveldb::Status const&)const; //TODO: incomplete function definition // _ZNK9DBStorage20_getTelemetryMessageB5cxx11ERKN7leveldb6StatusE
    void _queueSaveCallback(bool); // _ZN9DBStorage18_queueSaveCallbackEb
    void _isDBUsable(std::string const&, bool)const; // _ZNK9DBStorage11_isDBUsableERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void _isDBSaveable(std::string const&, bool)const; // _ZNK9DBStorage13_isDBSaveableERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void getTaskGroup(); // _ZN9DBStorage12getTaskGroupEv
//  void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN9DBStorage6_writeEN3gsl17basic_string_spanIKcLln1EEES3_
//  void _read(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition // _ZNK9DBStorage5_readEN3gsl17basic_string_spanIKcLln1EEERKSt8functionIFvS3_S3_EE
    void _readPendingWrite(std::string const&)const; // _ZNK9DBStorage17_readPendingWriteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string _corruptionMarkerPath()const; // _ZNK9DBStorage21_corruptionMarkerPathB5cxx11Ev
//  void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK9DBStorage16_markAsCorruptedEN3gsl17basic_string_spanIKcLln1EEE
//  void _handleErrorStatus(leveldb::Status const&); //TODO: incomplete function definition // _ZN9DBStorage18_handleErrorStatusERKN7leveldb6StatusE
//  void _write(leveldb::WriteBatch &); //TODO: incomplete function definition // _ZN9DBStorage6_writeERN7leveldb10WriteBatchE
//  bool hasAnyKeyWithPrefix(leveldb::Slice const&)const; //TODO: incomplete function definition // _ZNK9DBStorage19hasAnyKeyWithPrefixERKN7leveldb5SliceE
    void _writeAsync(std::string const&, std::string &&); // _ZN9DBStorage11_writeAsyncERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOS5_
    void _suspendAndPerformSaveAction(std::function<TaskResult (void)>, std::function<void (void)>); // _ZN9DBStorage28_suspendAndPerformSaveActionESt8functionIF10TaskResultvEES0_IFvvEE
    void _notifyChunkStorageDestroyed(DBChunkStorage &); // _ZN9DBStorage28_notifyChunkStorageDestroyedER14DBChunkStorage
    void _scheduleNextAutoCompaction(); // _ZN9DBStorage27_scheduleNextAutoCompactionEv
    class DBStorageToken {

    public:
        DBStorageToken(std::atomic<int> &); // _ZN9DBStorage14DBStorageTokenC2ERSt6atomicIiE
        DBStorageToken(DBStorage::DBStorageToken &&); // _ZN9DBStorage14DBStorageTokenC2EOS0_
        ~DBStorageToken(); // _ZN9DBStorage14DBStorageTokenD2Ev
        DBStorageToken(DBStorage::DBStorageToken const&); // _ZN9DBStorage14DBStorageTokenC2ERKS0_
    };
    class Options {

    public:
        Options(); // _ZN9DBStorage7OptionsC2Ev
    };
    class PendingWrite {

    public:
        ~PendingWrite(); // _ZN9DBStorage12PendingWriteD2Ev
        PendingWrite(); // _ZN9DBStorage12PendingWriteC2Ev
    };
};
