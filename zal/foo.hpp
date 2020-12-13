#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    for_each(people.begin(), people.end(), [](Human& person) { person.birthday(); });

  

    return ret_v;
}
