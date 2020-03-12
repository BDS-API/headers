#pragma once

#include <string>
#include "TagsComponent.h"
#include "../bedrock/level/Level.h"
#include "TagRegistry.h"


namespace TagSystem {

    void addTrackedTag(TagsComponent &, std::string const&, Level &);
    void removeTrackedTag(TagsComponent &, std::string const&, Level &);
    std::string getTags(TagsComponent const&, TagRegistry &);
    void synchLevelTagCache(Level &, TagRegistry &);
    bool hasTag(TagsComponent const&, std::string const&, TagRegistry const&);
//  bool hasTag(TagsComponent const&, IDType<TagIDType> const&, TagRegistry const&); //TODO: incomplete function definition
    void deregisterTagsFromLevelCache(TagsComponent &, Level &);
    void initLevelTagCache(TagsComponent &, Level &);
    void addTag(TagsComponent &, std::string const&, TagRegistry &);
    void removeTag(TagsComponent &, std::string const&, TagRegistry &);
};
