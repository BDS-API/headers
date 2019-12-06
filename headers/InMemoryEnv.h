#pragma once

class InMemoryEnv : FlushableEnv {

public:
    virtual ~InMemoryEnv();
    virtual void NewSequentialFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void FileExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void GetChildren(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> *);
    virtual void DeleteFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void RenameFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void flushToPermanentStorage(void);

    void InMemoryEnv(leveldb::Env *, Core::Path const&);
    void _flushWithTransaction(void);
};
