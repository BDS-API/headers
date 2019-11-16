#pragma once

class FlushableEnv : leveldb::EnvWrapper {

    virtual void FlushableEnv::~FlushableEnv();
    virtual void FlushableEnv::~FlushableEnv();
    virtual void NewSequentialFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void FileExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void GetChildren(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> *);
    virtual void DeleteFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void CreateDir(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void DeleteDir(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void GetFileSize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long *);
    virtual void RenameFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void LockFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::FileLock **);
    virtual void UnlockFile(leveldb::FileLock *);
    virtual void Schedule(void (*)(void *), void *);
    virtual void StartThread(void (*)(void *), void *);
    virtual void GetTestDirectory(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> *);
    virtual void NewLogger(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::Logger **);
    virtual void NowMicros(void);
    virtual void SleepForMicroseconds(int);
    virtual void flushToPermanentStorage(void);
}
