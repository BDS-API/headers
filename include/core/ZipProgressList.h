#pragma once

#include <functional>
#include "ZipProgress.h"
#include <memory>


namespace Core {

    namespace ZipUtils {

        class ZipProgressList {

        public:
            void createProgress();
            void clear();
            void getTotal();
            void _getSum(std::function<unsigned int (std::shared_ptr<Core::ZipUtils::ZipProgress>)>);
            ZipProgressList();
            void getSkipped();
            void getProgress();
            ~ZipProgressList();
            void getCount();
        };
    }
}
