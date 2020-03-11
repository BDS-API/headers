#pragma once

#include <functional>
#include <memory>
#include "./ZipProgress.h"


namespace Core::ZipUtils {

class ZipProgressList {

public:

    ZipProgressList();
    ~ZipProgressList();
    void getCount();
    void _getSum(std::function<unsigned int (std::shared_ptr<Core::ZipUtils::ZipProgress>)>);
    void getSkipped();
    void getTotal();
    void getProgress();
    void clear();
    void createProgress();
};

}