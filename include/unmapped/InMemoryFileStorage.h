#pragma once

#include "../core/Path.h"
#include <memory>
#include <vector>
#include "./InMemoryFile.h"
#include <string>


class InMemoryFileStorage {

public:

//  InMemoryFileStorage(leveldb::Env *); //TODO: incomplete function definition
    ~InMemoryFileStorage();
    void createFile(Core::Path const&);
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &);
    void deleteFile(Core::Path const&);
    void flushToDisk();
    void populateFileList(std::vector<std::string, std::allocator<std::string>> &);
};
