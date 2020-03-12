#pragma once

#include "Value.h"
#include <utility>
#include "ValueConstIterator.h"


namespace Json {

    class ValueIterator {

    public:
        ValueIterator(Json::ValueConstIterator const&);
//      ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
        ValueIterator();
        void operator*()const;
        ValueIterator(Json::ValueIterator const&);
    };
}
