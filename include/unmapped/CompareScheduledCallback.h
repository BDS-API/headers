#pragma once

#include "./ScheduledCallback.h"


class CompareScheduledCallback {

public:

    void operator()(ScheduledCallback const&, ScheduledCallback const&);
};
