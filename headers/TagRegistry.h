#pragma once

class TagRegistry {

public:

    void TagRegistry(TagRegistry const&);
    void TagRegistry(void);
    void getTagSetID(std::vector<IDType<TagIDType>, std::allocator<IDType<TagIDType>>> const&);
    void tryGetTagID(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getTagSetID(IndexSet const&);
    void getEmptyTagSetID(void)const;
    void tagContainedInSet(IDType<TagIDType>, IDType<TagSetIDType>)const;
    void _getSet(IDType<TagSetIDType>)const;
    void filterAdmitsSet(RegisteredTagFilter, IDType<TagSetIDType>)const;
    void acquireTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addTagToSet(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, IDType<TagSetIDType> const&);
    void addTagToSet(IDType<TagIDType>, IDType const&<TagSetIDType>);
    void removeTagFromSet(IDType<TagIDType>, IDType const&<TagSetIDType>);
    void removeTagFromSet(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, IDType<TagSetIDType> const&);
    void setsIntersect(IDType<TagSetIDType>, IDType<TagSetIDType>)const;
    void getTagIDsInSet(IDType<TagSetIDType>);
};
