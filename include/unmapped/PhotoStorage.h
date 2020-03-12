#pragma once

#include <string>
#include "../core/Path.h"
#include <vector>


class PhotoStorage {

public:
    static std::string PHOTO_DIR;
    static std::string BOOKS_DIR;
    static std::string MANIFEST_NAME;

    void _readManifest();
    void getBookPath(std::string const&);
    void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::string>> &);
    std::string getBookPath();
    void _writeManifest();
    PhotoStorage(Core::Path const&);
    void deleteBookPhoto(std::string const&, std::string const&);
    std::string getPhotoPath();
    bool isValidLoosePhoto(Player &, std::string const&);
    void _writeFile(Core::Path, std::string const&);
    void deleteLoosePhoto(Player &, std::string const&);
    void storeBookPhoto(std::string const&, std::string const&, std::string const&);
    void _isValidFile(Core::Path);
    void storeLoosePhoto(Player &, std::string const&, std::string const&);
    void setValidLoosePhoto(Player &, std::string const&);
    void _addValidFile(Core::Path);
    std::string getPhotoPath(Player &);
    bool isValidBookPhoto(std::string const&, std::string const&);
    ~PhotoStorage();
    void getBookPhoto(std::string const&, std::string const&, std::string &);
    void getLoosePhoto(Player &, std::string const&, std::string &);
    void _readFile(Core::Path, std::string &);
};
