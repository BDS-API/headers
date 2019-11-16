#pragma once

class FlushableStorageAreaEnv : FlushableEnv {

    virtual void ~FlushableStorageAreaEnv();
    virtual void ~FlushableStorageAreaEnv();
    virtual void leveldb::EnvWrapper::NewSequentialFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::SequentialFile **);
    virtual void leveldb::EnvWrapper::NewRandomAccessFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::RandomAccessFile **);
    virtual void leveldb::EnvWrapper::NewWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void leveldb::EnvWrapper::NewAppendableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void leveldb::EnvWrapper::FileExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void leveldb::EnvWrapper::GetChildren(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> *);
    virtual void leveldb::EnvWrapper::DeleteFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void leveldb::EnvWrapper::CreateDir(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void leveldb::EnvWrapper::DeleteDir(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void leveldb::EnvWrapper::GetFileSize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long *);
    virtual void leveldb::EnvWrapper::RenameFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void leveldb::EnvWrapper::LockFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::FileLock **);
    virtual void leveldb::EnvWrapper::UnlockFile(leveldb::FileLock *);
    virtual void leveldb::EnvWrapper::Schedule(void (*)(void *), void *);
    virtual void leveldb::EnvWrapper::StartThread(void (*)(void *), void *);
    virtual void leveldb::EnvWrapper::GetTestDirectory(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> *);
    virtual void leveldb::EnvWrapper::NewLogger(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::Logger **);
    virtual void leveldb::EnvWrapper::NowMicros(void);
    virtual void leveldb::EnvWrapper::SleepForMicroseconds(int);
    virtual void flushToPermanentStorage(void);
}
