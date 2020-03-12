#pragma once

#include <string>
#include <vector>


class LevelDbEnv /*leveldb::Env*/ { //TODO: incomplete class definition

public:
    static long sSingleton;

    virtual void DeleteFile(std::string const&);
    virtual void DeleteDir(std::string const&);
//  virtual void LockFile(std::string const&, leveldb::FileLock **); //TODO: incomplete function definition
    virtual void FileExists(std::string const&);
//  virtual void StartThread(void ((void *), , void *); //TODO: incomplete function definition
    ~LevelDbEnv();
//  virtual void NewLogger(std::string const&, leveldb::Logger **); //TODO: incomplete function definition
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void NowMicros();
    virtual void GetChildren(std::string const&, std::vector<std::string> *);
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition
    virtual void GetFileSize(std::string const&, unsigned long *);
//  virtual void UnlockFile(leveldb::FileLock *); //TODO: incomplete function definition
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
    virtual void GetTestDirectory(std::string *);
    virtual void CreateDir(std::string const&);
    virtual void SleepForMicroseconds(int);
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
    virtual void RenameFile(std::string const&, std::string const&);
    void exists();
    LevelDbEnv();
    void destroyInstance();
    void getSingleton();
    void createInstance();
    bool IsComplete()const;
};
