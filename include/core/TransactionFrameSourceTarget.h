#pragma once

#include "./TransactionFrameSourceTarget.h"
#include "./Result.h"
#include "./Path.h"
#include <functional>


namespace Core {

class TransactionFrameSourceTarget {

public:

    void exec(Core::Path const&, Core::Path const&, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>);
    TransactionFrameSourceTarget(Core::Path, Core::Path);
    ~TransactionFrameSourceTarget();
    void getTransaction();
    void getSourceEntryPath()const;
    void getTargetEntryPath()const;
    void getSourceTransaction();
    void getTargetTransaction();
};

}