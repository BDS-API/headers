#pragma once

#include <functional>


namespace Core {

    namespace ZipUtils {

        class ZipProgressList {

        public:
            ZipProgressList();
            void _getSum(std::function<unsigned int (std::shared_ptr<Core::ZipUtils::ZipProgress>)>);
            void clear();
            void createProgress();
            ~ZipProgressList();
            void getTotal();
            void getCount();
            void getProgress();
            void getSkipped();
        };
    }
}
