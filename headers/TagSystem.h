#pragma once

class TagSystem {

public:

    void addTag(TagsComponent &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry &);
    void removeTag(TagsComponent &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry &);
    void initLevelTagCache(TagsComponent &, Level &);
    void deregisterTagsFromLevelCache(TagsComponent &, Level &);
    void synchLevelTagCache(Level &, TagRegistry &);
    bool hasTag(TagsComponent const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry const&);
    bool hasTag(TagsComponent const&, IDType<TagIDType> const&, TagRegistry const&);
    void removeTrackedTag(TagsComponent &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Level &);
    void addTrackedTag(TagsComponent &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Level &);
};
