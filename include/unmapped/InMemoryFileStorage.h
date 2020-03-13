#pragma once

#include <memory>
#include <vector>


class InMemoryFileStorage {

public:
//  InMemoryFileStorage(leveldb::Env *); //TODO: incomplete function definition // _ZN19InMemoryFileStorageC2EPN7leveldb3EnvE
    ~InMemoryFileStorage(); // _ZN19InMemoryFileStorageD2Ev
    void createFile(Core::Path const&); // _ZN19InMemoryFileStorage10createFileERKN4Core4PathE
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &); // _ZN19InMemoryFileStorage8findFileERKN4Core4PathERSt10shared_ptrI12InMemoryFileE
    void deleteFile(Core::Path const&); // _ZN19InMemoryFileStorage10deleteFileERKN4Core4PathE
    void flushToDisk(); // _ZN19InMemoryFileStorage11flushToDiskEv
    void populateFileList(std::vector<std::string> &); // _ZN19InMemoryFileStorage16populateFileListERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
};
