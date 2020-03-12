#pragma once

#include <string>
#include "InMemoryFile.h"
#include "../core/Path.h"
#include <vector>
#include <memory>


class InMemoryFileStorage {

public:
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &);
//  InMemoryFileStorage(leveldb::Env *); //TODO: incomplete function definition
    void deleteFile(Core::Path const&);
    void populateFileList(std::vector<std::string> &);
    void flushToDisk();
    ~InMemoryFileStorage();
    void createFile(Core::Path const&);
};
