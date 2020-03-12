#pragma once

#include "IndexSet.h"
#include <vector>
#include <string>


class TagRegistry {

public:
//  void removeTagFromSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
//  bool setsIntersect(IDType<TagSetIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
    void getEmptyTagSetID()const;
//  void getTagIDsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
    void tryGetTagID(std::string const&)const;
//  void filterAdmitsSet(RegisteredTagFilter, IDType<TagSetIDType>)const; //TODO: incomplete function definition
    std::string getTags();
//  void tagContainedInSet(IDType<TagIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition
    TagRegistry();
//  std::string getTag(IDType<TagIDType>); //TODO: incomplete function definition
//  void removeTagFromSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  std::string getTagsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition
    TagRegistry(TagRegistry const&);
    void acquireTag(std::string const&);
    ~TagRegistry();
//  void addTagToSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition
//  void addTagToSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition
    void getTagSetID(IndexSet const&);
//  std::string getTag(IDType<TagIDType>)const; //TODO: incomplete function definition
//  void getTagSetID(std::vector<IDType<TagIDType>> const&); //TODO: incomplete function definition
//  void _getSet(IDType<TagSetIDType>)const; //TODO: incomplete function definition
};
