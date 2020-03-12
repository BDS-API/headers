#pragma once

#include "Result.h"
#include <functional>


namespace Core {

    class TransactionFrame {

    public:
        void getTransaction();
        void getPath()const;
        ~TransactionFrame();
//      void exec(Core::FileAccessType, Core::Path const&, std::function<Core::Result (Core::TransactionFrame &)> const&); //TODO: incomplete function definition
//      TransactionFrame(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition
    };
}
