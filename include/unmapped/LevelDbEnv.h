#pragma once

#include <vector>
#include <string>


class LevelDbEnv /*leveldb::Env*/ { //TODO: incomplete class definition

public:
    static long sSingleton;

    virtual void DeleteFile(std::string const&);
    virtual void CreateDir(std::string const&);
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
//  virtual void UnlockFile(leveldb::FileLock *); //TODO: incomplete function definition
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
//  virtual void NewLogger(std::string const&, leveldb::Logger **); //TODO: incomplete function definition
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
    virtual void GetTestDirectory(std::string *);
    virtual void RenameFile(std::string const&, std::string const&);
    virtual void DeleteDir(std::string const&);
    virtual void NowMicros();
//  virtual void StartThread(void ((void *), , void *); //TODO: incomplete function definition
    ~LevelDbEnv();
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition
//  virtual void LockFile(std::string const&, leveldb::FileLock **); //TODO: incomplete function definition
    virtual void GetFileSize(std::string const&, unsigned long *);
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void FileExists(std::string const&);
    virtual void GetChildren(std::string const&, std::vector<std::string> *);
    virtual void SleepForMicroseconds(int);
    void createInstance();
    void destroyInstance();
    void getSingleton();
    void exists();
    LevelDbEnv();
    bool IsComplete()const;
};
