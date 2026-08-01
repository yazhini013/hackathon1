#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include "constants.hpp"
#include <cstddef>

constexpr std::size_t USERNAME_SIZE = 32;
constexpr std::size_t EMAIL_SIZE = 255;

constexpr std::size_t ENTITY_SIZE = 291;
constexpr std::size_t PAGE_SIZE = 4096;

constexpr std::size_t ENTITIES_PER_PAGE = PAGE_SIZE / ENTITY_SIZE;

constexpr std::size_t MAX_PAGES = 100;

constexpr std::size_t MAX_ENTITIES =
    ENTITIES_PER_PAGE * MAX_PAGES;

#endif