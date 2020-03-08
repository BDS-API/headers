#pragma once



class EncryptedProxyEnv : leveldb::EnvWrapper {

public:
    virtual EncryptedProxyEnv::~EncryptedProxyEnv()
    virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::string const&, leveldb::WritableFile **);
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);

    EncryptedProxyEnv(leveldb::Env *, ContentIdentity const&, std::string const&);
};
