#pragma once

#include "Value.h"
#include <utility>


namespace Json {

    class ValueConstIterator {

    public:
        ValueConstIterator();
        ValueConstIterator(Json::ValueConstIterator const&);
        void operator*()const;
//      ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
    };
}
