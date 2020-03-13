#pragma once

#include <string>


class EncryptedProxyEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    ~EncryptedProxyEnv(); // _ZN17EncryptedProxyEnvD2Ev
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void DeleteFile(std::string const&); // _ZN17EncryptedProxyEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void RenameFile(std::string const&, std::string const&); // _ZN17EncryptedProxyEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  EncryptedProxyEnv(leveldb::Env *, ContentIdentity const&, std::string const&); //TODO: incomplete function definition // _ZN17EncryptedProxyEnvC2EPN7leveldb3EnvERK15ContentIdentityRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
