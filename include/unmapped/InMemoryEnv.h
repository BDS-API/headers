#pragma once

#include "FlushableEnv.h"
#include <vector>
#include <string>


class InMemoryEnv : FlushableEnv {

public:
    ~InMemoryEnv(); // _ZN11InMemoryEnvD2Ev
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition // _ZN11InMemoryEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition // _ZN11InMemoryEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN11InMemoryEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN11InMemoryEnv17NewAppendableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void FileExists(std::string const&); // _ZN11InMemoryEnv10FileExistsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void GetChildren(std::string const&, std::vector<std::string> *); // _ZN11InMemoryEnv11GetChildrenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS5_SaIS5_EE
    virtual void DeleteFile(std::string const&); // _ZN11InMemoryEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void RenameFile(std::string const&, std::string const&); // _ZN11InMemoryEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void flushToPermanentStorage(); // _ZN11InMemoryEnv23flushToPermanentStorageEv
//  InMemoryEnv(leveldb::Env *, Core::Path const&); //TODO: incomplete function definition // _ZN11InMemoryEnvC2EPN7leveldb3EnvERKN4Core4PathE
    void _flushWithTransaction(); // _ZN11InMemoryEnv21_flushWithTransactionEv
};
