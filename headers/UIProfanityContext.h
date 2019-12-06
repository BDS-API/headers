#pragma once

class UIProfanityContext {

public:
    virtual ~UIProfanityContext();
    virtual void _doMaskProfanity(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void _doFindProfanity(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;

    void createProfanityContext(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>> const&, std::unordered_set<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void UIProfanityContext(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>> const&, std::unordered_set<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void setFilterMask(ProfanityFilterContext);
    bool isFilterActive(ProfanityFilterContext)const;
    void filterProfanityFromString(ProfanityFilterContext, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)const;
    void findProfanity(ProfanityFilterContext, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
};
