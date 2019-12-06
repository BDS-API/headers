#pragma once

class Localization {

public:

    void Localization(Localization const&);
    void getLanguageCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getRegionCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getStringIdExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getCommaSeperator(void)const;
    void loadFromResourcePackManager(ResourcePackManager &, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void _getLangFilePath(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void appendTranslations(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void loadFromPack(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PackAccessStrategy const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void Localization(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Localization*);
    void _isCommaSeperatedLanguage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Localization(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getSimple(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isFormattedString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _parseFormattedString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void _get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    void _replaceTokens(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    void appendTranslations(Localization const&);
    void appendTranslations(std::unordered_multimap<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>>> const&);
};
