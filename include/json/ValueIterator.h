#pragma once

#include <utility>
#include "./ValueIterator.h"
#include "./CZString.h"
#include "./ValueConstIterator.h"
#include "./Value.h"


namespace Json {

class ValueIterator {

public:

    void operator*()const;
    ValueIterator();
//  ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
    ValueIterator(Json::ValueConstIterator const&);
    ValueIterator(Json::ValueIterator const&);
};

}