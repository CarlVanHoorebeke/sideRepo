#pragma once

#include <string>

#include "libzork/variables/action.hh"
#include "libzork/variables/condition.hh"

namespace story
{
    class Node;

    class Choice
    {
    public:
        Choice(const Node* target, const std::string& text);

        const Node* get_target() const;
        const std::string& get_name() const;
        const std::string& get_text() const;

    protected:
        const Node* target_;
        std::string name_;
        std::string text_;
        // Condition conditions_;
        // Action action_;
    };
} // namespace story