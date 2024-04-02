#ifndef TODO_ITEM_H
#define TODO_ITEM_H

#include <string>

class TodoItem {
private:
    int id;
    std::string description;
    bool completed;

public:
    TodoItem();
    ~TodoItem();

    bool create(std::string new_description);
    int getId();
    std::string getDescription();
    bool isCompleted();
    void setCompleted(bool val);
};

#endif
