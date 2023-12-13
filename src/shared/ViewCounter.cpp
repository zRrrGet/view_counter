#include "ViewCounter.hpp"

ViewCounter::ViewCounter() : count(0) {}

void ViewCounter::increment() {
    ++count;
}

int ViewCounter::get() {
    return count;
}