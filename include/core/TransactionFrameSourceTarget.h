#pragma once

#include "Path.h"
#include "Result.h"
#include <functional>


namespace Core {

    class TransactionFrameSourceTarget {

    public:
        void getTransaction();
        void exec(Core::Path const&, Core::Path const&, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>);
        void getTargetEntryPath()const;
        void getTargetTransaction();
        void getSourceTransaction();
        TransactionFrameSourceTarget(Core::Path, Core::Path);
        void getSourceEntryPath()const;
        ~TransactionFrameSourceTarget();
    };
}
