#pragma once

#include <string>
#include "./ContentIdentity.h"


class EncryptedProxyEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    virtual ~EncryptedProxyEnv();
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);

//  EncryptedProxyEnv(leveldb::Env *, ContentIdentity const&, std::string const&); //TODO: incomplete function definition
};
