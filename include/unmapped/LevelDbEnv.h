#pragma once

#include <string>
#include <vector>


class LevelDbEnv /*leveldb::Env*/ { //TODO: incomplete class definition

public:
    static long sSingleton;

    ~LevelDbEnv(); // _ZN10LevelDbEnvD2Ev
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition // _ZN10LevelDbEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition // _ZN10LevelDbEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN10LevelDbEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN10LevelDbEnv17NewAppendableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void FileExists(std::string const&); // _ZN10LevelDbEnv10FileExistsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void GetChildren(std::string const&, std::vector<std::string> *); // _ZN10LevelDbEnv11GetChildrenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS5_SaIS5_EE
    virtual void DeleteFile(std::string const&); // _ZN10LevelDbEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void CreateDir(std::string const&); // _ZN10LevelDbEnv9CreateDirERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void DeleteDir(std::string const&); // _ZN10LevelDbEnv9DeleteDirERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void GetFileSize(std::string const&, unsigned long *); // _ZN10LevelDbEnv11GetFileSizeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPm
    virtual void RenameFile(std::string const&, std::string const&); // _ZN10LevelDbEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  virtual void LockFile(std::string const&, leveldb::FileLock **); //TODO: incomplete function definition // _ZN10LevelDbEnv8LockFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb8FileLockE
//  virtual void UnlockFile(leveldb::FileLock *); //TODO: incomplete function definition // _ZN10LevelDbEnv10UnlockFileEPN7leveldb8FileLockE
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition // _ZN10LevelDbEnv8ScheduleEPFvPvES0_
//  virtual void StartThread(void ((void *), , void *); //TODO: incomplete function definition // _ZN10LevelDbEnv11StartThreadEPFvPvES0_
    virtual void GetTestDirectory(std::string *); // _ZN10LevelDbEnv16GetTestDirectoryEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void NewLogger(std::string const&, leveldb::Logger **); //TODO: incomplete function definition // _ZN10LevelDbEnv9NewLoggerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb6LoggerE
    virtual void NowMicros(); // _ZN10LevelDbEnv9NowMicrosEv
    virtual void SleepForMicroseconds(int); // _ZN10LevelDbEnv20SleepForMicrosecondsEi
    void createInstance(); // _ZN10LevelDbEnv14createInstanceEv
    void getSingleton(); // _ZN10LevelDbEnv12getSingletonEv
    void exists(); // _ZN10LevelDbEnv6existsEv
    void destroyInstance(); // _ZN10LevelDbEnv15destroyInstanceEv
    LevelDbEnv(); // _ZN10LevelDbEnvC2Ev
    bool IsComplete()const; // _ZNK10LevelDbEnv10IsCompleteEv
};
