#include "TodoItem.h"
#include <cstdlib>
#include <ctime>

TodoItem::TodoItem() : id(0), description(""), completed(false) {}

TodoItem::~TodoItem() {}

bool TodoItem::create(std::string new_description) {
    id = rand() % 100 + 1;
    description = new_description;
    return true;
}

int TodoItem::getId() { return id; }

std::string TodoItem::getDescription() { return description; }

bool TodoItem::isCompleted() { return completed; }

void TodoItem::setCompleted(bool val) { completed = val; }
