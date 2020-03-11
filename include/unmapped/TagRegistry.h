#pragma once

#include <memory>
#include <vector>
#include "./TagRegistry.h"
#include "./IndexSet.h"
#include <string>


class TagRegistry {

public:

    TagRegistry(TagRegistry const&);
    TagRegistry();
//  void getTagSetID(std::vector<IDType<TagIDType>, std::allocator<IDType<TagIDType>>> const&); //TODO: incomplete function definition
    ~TagRegistry();
    void tryGetTagID(std::string const&)const;
//  std::string getTag(IDType<TagIDType>); //TODO: incomplete function definition
    void getTagSetID(IndexSet const&);
    void getEmptyTagSetID()const;
//  void tagContainedInSet(IDType<TagIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
//  void _getSet(IDType<TagSetIDType>)const; //TODO: incomplete function definition
//  void filterAdmitsSet(RegisteredTagFilter, IDType<TagSetIDType>)const; //TODO: incomplete function definition
    std::string getTags();
    void acquireTag(std::string const&);
//  std::string getTag(IDType<TagIDType>)const; //TODO: incomplete function definition
//  void addTagToSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
//  void addTagToSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  void removeTagFromSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  void removeTagFromSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
//  bool setsIntersect(IDType<TagSetIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
//  std::string getTagsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
//  void getTagIDsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
};
