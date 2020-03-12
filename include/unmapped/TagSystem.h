#pragma once

#include <string>


namespace TagSystem {

//  bool hasTag(TagsComponent const&, IDType<TagIDType> const&, TagRegistry const&); //TODO: incomplete function definition
    void removeTrackedTag(TagsComponent &, std::string const&, Level &);
    void addTrackedTag(TagsComponent &, std::string const&, Level &);
    void deregisterTagsFromLevelCache(TagsComponent &, Level &);
    void synchLevelTagCache(Level &, TagRegistry &);
    bool hasTag(TagsComponent const&, std::string const&, TagRegistry const&);
    std::string getTags(TagsComponent const&, TagRegistry &);
    void addTag(TagsComponent &, std::string const&, TagRegistry &);
    void initLevelTagCache(TagsComponent &, Level &);
    void removeTag(TagsComponent &, std::string const&, TagRegistry &);
};
