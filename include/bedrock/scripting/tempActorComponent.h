#pragma once

#include "../actor/unmapped/ActorUniqueID.h"


namespace ScriptApi {

    namespace WORKAROUNDS {

        class tempActorComponent {

        public:
            tempActorComponent(ActorUniqueID const&);
        };
    }
}
