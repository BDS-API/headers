#pragma once

#include <string>
#include "../core/Path.h"
#include <vector>


class PhotoStorage {

public:
    static std::string PHOTO_DIR;
    static std::string BOOKS_DIR;
    static std::string MANIFEST_NAME;

    ~PhotoStorage(); // _ZN12PhotoStorageD2Ev
    PhotoStorage(Core::Path const&); // _ZN12PhotoStorageC2ERKN4Core4PathE
    void _readManifest(); // _ZN12PhotoStorage13_readManifestEv
    std::string getPhotoPath(Player &); // _ZN12PhotoStorage12getPhotoPathB5cxx11ER6Player
    std::string getPhotoPath(); // _ZN12PhotoStorage12getPhotoPathB5cxx11Ev
    void getBookPath(std::string const&); // _ZN12PhotoStorage11getBookPathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getBookPath(); // _ZN12PhotoStorage11getBookPathB5cxx11Ev
    void storeLoosePhoto(Player &, std::string const&, std::string const&); // _ZN12PhotoStorage15storeLoosePhotoER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_
    void _writeFile(Core::Path, std::string const&); // _ZN12PhotoStorage10_writeFileEN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void storeBookPhoto(std::string const&, std::string const&, std::string const&); // _ZN12PhotoStorage14storeBookPhotoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    void getLoosePhoto(Player &, std::string const&, std::string &); // _ZN12PhotoStorage13getLoosePhotoER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS7_
    void _readFile(Core::Path, std::string &); // _ZN12PhotoStorage9_readFileEN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBookPhoto(std::string const&, std::string const&, std::string &); // _ZN12PhotoStorage12getBookPhotoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RS5_
    void deleteLoosePhoto(Player &, std::string const&); // _ZN12PhotoStorage16deleteLoosePhotoER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void deleteBookPhoto(std::string const&, std::string const&); // _ZN12PhotoStorage15deleteBookPhotoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    bool isValidLoosePhoto(Player &, std::string const&); // _ZN12PhotoStorage17isValidLoosePhotoER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _isValidFile(Core::Path); // _ZN12PhotoStorage12_isValidFileEN4Core4PathE
    bool isValidBookPhoto(std::string const&, std::string const&); // _ZN12PhotoStorage16isValidBookPhotoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void setValidLoosePhoto(Player &, std::string const&); // _ZN12PhotoStorage18setValidLoosePhotoER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _addValidFile(Core::Path); // _ZN12PhotoStorage13_addValidFileEN4Core4PathE
    void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::string>> &); // _ZN12PhotoStorage14getLoosePhotosER6PlayerRSt6vectorIN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaISB_EE
    void _writeManifest(); // _ZN12PhotoStorage14_writeManifestEv
};
