#pragma once

#include "../core/Path"


class InMemoryFileStorage {

public:

    InMemoryFileStorage(leveldb::Env *);
    void createFile(Core::Path const&);
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &);
    void deleteFile(Core::Path const&);
    void flushToDisk();
    void populateFileList(std::vector<std::string, std::allocator<std::string>> &);
};
