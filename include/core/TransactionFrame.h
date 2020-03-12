#pragma once

#include "Result.h"
#include <functional>
#include "Path.h"


namespace Core {

    class TransactionFrame {

    public:
//      void exec(Core::FileAccessType, Core::Path const&, std::function<Core::Result (Core::TransactionFrame &)> const&); //TODO: incomplete function definition
//      TransactionFrame(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition
        void getTransaction();
        void getPath()const;
        ~TransactionFrame();
    };
}
