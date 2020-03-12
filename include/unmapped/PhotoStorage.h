#pragma once

#include "../bedrock/actor/Player.h"
#include "../core/Path.h"
#include <vector>
#include <string>


class PhotoStorage {

public:
    static std::string PHOTO_DIR;
    static std::string BOOKS_DIR;
    static std::string MANIFEST_NAME;

    std::string getPhotoPath();
    PhotoStorage(Core::Path const&);
    std::string getPhotoPath(Player &);
    void _addValidFile(Core::Path);
    void setValidLoosePhoto(Player &, std::string const&);
    void _writeFile(Core::Path, std::string const&);
    void _readFile(Core::Path, std::string &);
    bool isValidBookPhoto(std::string const&, std::string const&);
    void getLoosePhoto(Player &, std::string const&, std::string &);
//  void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::string>> &); //TODO: incomplete function definition
    ~PhotoStorage();
    std::string getBookPath();
    bool isValidLoosePhoto(Player &, std::string const&);
    void _isValidFile(Core::Path);
    void getBookPath(std::string const&);
    void _readManifest();
    void deleteLoosePhoto(Player &, std::string const&);
    void deleteBookPhoto(std::string const&, std::string const&);
    void storeLoosePhoto(Player &, std::string const&, std::string const&);
    void storeBookPhoto(std::string const&, std::string const&, std::string const&);
    void _writeManifest();
    void getBookPhoto(std::string const&, std::string const&, std::string &);
};
