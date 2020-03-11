#pragma once

#include "../core/Path.h"
#include "./MetaData.h"


namespace IInPackagePacks {

class MetaData {

public:

    ~MetaData();
    MetaData(IInPackagePacks::MetaData const&);
//  MetaData(Core::Path const&, bool, PackCategory); //TODO: incomplete function definition
};

}