#pragma once

#include "../core/Path.h"
#include <memory>
#include <vector>
#include "../bedrock/actor/Player.h"
#include <string>


class PhotoStorage {

public:
    static std::string PHOTO_DIR;
    static std::string BOOKS_DIR;
    static std::string MANIFEST_NAME;


    ~PhotoStorage();
    PhotoStorage(Core::Path const&);
    void _readManifest();
    std::string getPhotoPath(Player &);
    std::string getPhotoPath();
    void getBookPath(std::string const&);
    std::string getBookPath();
    void storeLoosePhoto(Player &, std::string const&, std::string const&);
    void _writeFile(Core::Path, std::string const&);
    void storeBookPhoto(std::string const&, std::string const&, std::string const&);
    void getLoosePhoto(Player &, std::string const&, std::string &);
    void _readFile(Core::Path, std::string &);
    void getBookPhoto(std::string const&, std::string const&, std::string &);
    void deleteLoosePhoto(Player &, std::string const&);
    void deleteBookPhoto(std::string const&, std::string const&);
    bool isValidLoosePhoto(Player &, std::string const&);
    void _isValidFile(Core::Path);
    bool isValidBookPhoto(std::string const&, std::string const&);
    void setValidLoosePhoto(Player &, std::string const&);
    void _addValidFile(Core::Path);
//  void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &); //TODO: incomplete function definition
    void _writeManifest();
};
