#pragma once

#include <memory>
#include <vector>


class InMemoryFileStorage {

public:
    void flushToDisk();
    ~InMemoryFileStorage();
    void deleteFile(Core::Path const&);
    void populateFileList(std::vector<std::string> &);
//  InMemoryFileStorage(leveldb::Env *); //TODO: incomplete function definition
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &);
    void createFile(Core::Path const&);
};
