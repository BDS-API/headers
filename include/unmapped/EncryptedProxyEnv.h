#pragma once

#include <string>


class EncryptedProxyEnv /*public leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    virtual ~EncryptedProxyEnv(); // _ZN17EncryptedProxyEnvD2Ev
    virtual void __fake_function0(); // fake
    virtual void NewSequentialFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
    virtual void NewRandomAccessFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
    virtual void NewWritableFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN17EncryptedProxyEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void DeleteFile(std::string const&); // _ZN17EncryptedProxyEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void RenameFile(std::string const&, std::string const&); // _ZN17EncryptedProxyEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//    EncryptedProxyEnv(long *, ContentIdentity const&, std::string const&); //TODO: incomplete function definition // _ZN17EncryptedProxyEnvC2EPN7leveldb3EnvERK15ContentIdentityRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
