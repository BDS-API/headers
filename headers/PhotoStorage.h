#pragma once

class PhotoStorage {

public:

    void PhotoStorage(Core::Path const&);
    void _readManifest(void);
    void getBookPath(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void storeLoosePhoto(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _writeFile(Core::Path, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void storeBookPhoto(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getLoosePhoto(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
    void _readFile(Core::Path, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void getBookPhoto(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
    void deleteLoosePhoto(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void deleteBookPhoto(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isValidLoosePhoto(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _isValidFile(Core::Path);
    bool isValidBookPhoto(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setValidLoosePhoto(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _addValidFile(Core::Path);
    void getLoosePhotos(Player &, std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    void _writeManifest(void);
};
