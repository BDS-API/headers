#pragma once

#include "Result.h"
#include <functional>
#include "Path.h"


namespace Core {

    class TransactionFrameSourceTarget {

    public:
        void getSourceTransaction();
        void getTransaction();
        void getSourceEntryPath()const;
        void getTargetTransaction();
        void exec(Core::Path const&, Core::Path const&, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>);
        ~TransactionFrameSourceTarget();
        TransactionFrameSourceTarget(Core::Path, Core::Path);
        void getTargetEntryPath()const;
    };
}
