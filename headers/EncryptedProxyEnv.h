#pragma once

class EncryptedProxyEnv : leveldb::EnvWrapper {

public:
    virtual ~EncryptedProxyEnv();
    virtual void NewSequentialFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, leveldb::WritableFile **);
    virtual void DeleteFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void RenameFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void EncryptedProxyEnv(leveldb::Env *, ContentIdentity const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
