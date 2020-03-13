#pragma once

#include <string>


namespace TagSystem {

    void addTag(TagsComponent &, std::string const&, TagRegistry &); // _ZN9TagSystem6addTagER13TagsComponentRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
    void removeTag(TagsComponent &, std::string const&, TagRegistry &); // _ZN9TagSystem9removeTagER13TagsComponentRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
    void initLevelTagCache(TagsComponent &, Level &); // _ZN9TagSystem17initLevelTagCacheER13TagsComponentR5Level
    void deregisterTagsFromLevelCache(TagsComponent &, Level &); // _ZN9TagSystem28deregisterTagsFromLevelCacheER13TagsComponentR5Level
    void synchLevelTagCache(Level &, TagRegistry &); // _ZN9TagSystem18synchLevelTagCacheER5LevelR11TagRegistry
    bool hasTag(TagsComponent const&, std::string const&, TagRegistry const&); // _ZN9TagSystem6hasTagERK13TagsComponentRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11TagRegistry
//  bool hasTag(TagsComponent const&, IDType<TagIDType> const&, TagRegistry const&); //TODO: incomplete function definition // _ZN9TagSystem6hasTagERK13TagsComponentRK6IDTypeI9TagIDTypeERK11TagRegistry
    std::string getTags(TagsComponent const&, TagRegistry &); // _ZN9TagSystem7getTagsB5cxx11ERK13TagsComponentR11TagRegistry
    void removeTrackedTag(TagsComponent &, std::string const&, Level &); // _ZN9TagSystem16removeTrackedTagER13TagsComponentRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Level
    void addTrackedTag(TagsComponent &, std::string const&, Level &); // _ZN9TagSystem13addTrackedTagER13TagsComponentRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Level
};
