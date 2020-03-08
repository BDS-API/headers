#pragma once

#include "../bedrock/actor/Player"
#include "../core/Path"


class PhotoStorage {

public:
    static long PHOTO_DIR[abi:cxx11];
    static long BOOKS_DIR[abi:cxx11];
    static long MANIFEST_NAME[abi:cxx11];


    PhotoStorage(Core::Path const&);
    void _readManifest();
    void getBookPath(std::string const&);
    void storeLoosePhoto(Player &, std::string const&, std::string const&);
    void _writeFile(Core::Path, std::string const&);
    void storeBookPhoto(std::string const&, std::string const&, std::string const&);
    void getLoosePhoto(Player &, std::string const&, std::string&);
    void _readFile(Core::Path, std::string &);
    void getBookPhoto(std::string const&, std::string const&, std::string&);
    void deleteLoosePhoto(Player &, std::string const&);
    void deleteBookPhoto(std::string const&, std::string const&);
    bool isValidLoosePhoto(Player &, std::string const&);
    void _isValidFile(Core::Path);
    bool isValidBookPhoto(std::string const&, std::string const&);
    void setValidLoosePhoto(Player &, std::string const&);
    void _addValidFile(Core::Path);
    void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &);
    void _writeManifest();
};
