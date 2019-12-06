#pragma once

class SnapshotEnv : leveldb::EnvWrapper {

public:
    virtual ~SnapshotEnv();
    virtual void NewSequentialFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void DeleteFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void RenameFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void SnapshotEnv(leveldb::Env *);
    void _newWrappedWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    void createSnapshot(Core::Path const&);
    void releaseSnapshot(void);
};
