#pragma once



class LevelDbEnv : leveldb::Env {

public:
    static long sSingleton;

    virtual LevelDbEnv::~LevelDbEnv()
    virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::string const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **);
    virtual void FileExists(std::string const&);
    virtual void GetChildren(std::string const&, std::vector<std::string, std::allocator<std::string>> *);
    virtual void DeleteFile(std::string const&);
    virtual void CreateDir(std::string const&);
    virtual void DeleteDir(std::string const&);
    virtual void GetFileSize(std::string const&, unsigned long *);
    virtual void RenameFile(std::string const&, std::string const&);
    virtual void LockFile(std::string const&, leveldb::FileLock **);
    virtual void UnlockFile(leveldb::FileLock *);
    virtual void Schedule(void ()((void *), , void *);
    virtual void StartThread(void ()((void *), , void *);
    virtual void GetTestDirectory(std::string *);
    virtual void NewLogger(std::string const&, leveldb::Logger **);
    virtual void NowMicros();
    virtual void SleepForMicroseconds(int);

    void createInstance();
    void getSingleton();
    void exists();
    void destroyInstance();
    LevelDbEnv(void);
    void IsComplete()const;
};
