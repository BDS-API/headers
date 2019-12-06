#pragma once

class InMemoryFileStorage {

public:

    void InMemoryFileStorage(leveldb::Env *);
    void createFile(Core::Path const&);
    void findFile(Core::Path const&, std::shared_ptr<InMemoryFile> &);
    void deleteFile(Core::Path const&);
    void flushToDisk(void);
    void populateFileList(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
};
