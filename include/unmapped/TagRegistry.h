#pragma once

#include <string>
#include <vector>


class TagRegistry {

public:
    std::string getTags();
//  void addTagToSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  void filterAdmitsSet(RegisteredTagFilter, IDType<TagSetIDType>)const; //TODO: incomplete function definition
//  std::string getTag(IDType<TagIDType>)const; //TODO: incomplete function definition
//  void removeTagFromSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
//  void removeTagFromSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  void addTagToSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
    TagRegistry();
    void getEmptyTagSetID()const;
//  std::string getTag(IDType<TagIDType>); //TODO: incomplete function definition
//  bool setsIntersect(IDType<TagSetIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
//  std::string getTagsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
    ~TagRegistry();
//  void _getSet(IDType<TagSetIDType>)const; //TODO: incomplete function definition
    void getTagSetID(std::vector<IDType<TagIDType>> const&);
//  void getTagIDsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
    void acquireTag(std::string const&);
    void tryGetTagID(std::string const&)const;
//  void tagContainedInSet(IDType<TagIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
    TagRegistry(TagRegistry const&);
    void getTagSetID(IndexSet const&);
};
